/*  Project By:- Dastagir Abbas Mulani


 In this project we are going to create the replica of the ATM user interface software 

In this we can 
-> Check Balance
-> Cash withdraw
-> User Details
-> Update Mobile No

*/

#include <iostream>
#include <conio.h>
#include<string>
using namespace std;

class atm{
private:                //Setting the Private Member Variables
    long int acc_no;
    string name;
    int PIN;
    double balance;
    string mob_no;

public:
    //Setdata function will set the data into the private member variables
    void setData(long int acc_no_a, string name_a,int PIN_a, double balance_a, string mob_no_a ){
        acc_no = acc_no_a;
        name = name_a; 
        PIN = PIN_a;
        balance = balance_a;
        mob_no = mob_no_a;
    }

    //Declaring the getter functions which return the corresponding details
    long int getAccNo(){
        return acc_no;
    }

    string getName(){
        return name ;
    }

    int getPin(){
        return PIN;

    }

    double getBalance(){
        return balance;
    }
    string getMobNo(){
        return mob_no;
    }

    //setMobile function will update the user mobile no
    void setMobile(string mob_old, string mob_new){
        if(mob_old == mob_no){
            mob_no = mob_new;           //Updates the Mobile no.
            cout<<endl<<"Successfully updated the Mobile No.";
            _getch();                   //Holds the screen until uset presses any key and he wants to leave from current screen 

        }
        else{
            cout<<endl<<"Incorrect !!!!! Old Mobile No. \n please Try entering correct no. Again";
            _getch();
        }
    }

    //Cashwithdraw function is used to withdraw money from ATM
    void cashWithDraw(int amount_a){
        if(amount_a>0 && amount_a<balance){
            balance -= amount_a;
            cout<<endl<<"Please Collect your cash";
            cout<<"Available Balance :"<<balance;
            _getch();
        }
        else{
            cout<<endl<<"Invalid input or Insufficient Balance";
            _getch();
        }
    }
};



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    //for user Authentication we will take account No. and PIN
    int enterPIN, choice=0;
    long int enterAccNO;

    system("cls");

    //Creating a object or User
    atm user1;

    //Setting details for object
    user1.setData(123456789, "Dastagir", 12345, 1236578.786, "8766455837");

    do{
        system("cls");
        cout<<endl<<"********** Welcome to ATM **********"<<endl;
        cout<<endl<<"Enter Your Account No. ";  //Asking user to enter the account no
        cin>>enterAccNO;

        cout<<endl<<"Enter the PIN ";
        cin>>enterPIN;

        //check whether enter values matches with user details
        if((enterAccNO==user1.getAccNo())&& (enterPIN == user1.getPin())){
            do{
                int amount = 0;
                string oldMobileNo, newMobileNo;

                system("cls");

                //User Interface
                cout<<endl<<"****** Welcome to ATM ****** ";
                cout<<endl<<"Select Options ";
                cout<<endl<<"1. Check Balance";
                cout<<endl<<"2. Cash withdraw";
                cout<<endl<<"3. Show user Details";
                cout<<endl<<"4. Update Mobile NO.";
                cout<<endl<<"5. Exit"<<endl;
                cin>>choice;

                switch(choice){
                    case 1:
                        cout<<endl<< "Your Bank Balance is : "<<user1.getBalance();
                        _getch();
                        break;

                    case 2:
                        cout<<endl<<"Enter the Amount :";
                        cin>>amount;
                        user1.cashWithDraw(amount);
                        break;

                    case 3 :
                        cout << endl << "*** User Details are :- ";
                        cout << endl << "-> Account no" << user1.getAccNo();
                        cout << endl << "-> Name      " << user1.getName();
                        cout << endl << "-> Balance   " << user1.getBalance();
                        cout << endl << "-> Mobile No." << user1.getMobNo();
                                                        // getting and printing user details
                        _getch();
                        break;

                    case 4:								   //  if user presses 4
					    cout << endl << "Enter Old Mobile No. ";
					    cin >> oldMobileNo;							// take old mobile no

					    cout << endl << "Enter New Mobile No. ";
					    cin >> newMobileNo;							// take new mobile no

					    user1.setMobile(oldMobileNo, newMobileNo);	// now set new mobile no
					break;

													// if user presses 5
				    case 5:
					    exit(0);						// exit application

				    default:							// handle invalid user inputs
					    cout << endl << "Enter Valid Data !!!";

                }
            }while(1);
        }
        else
		{
			cout << endl << "User Details are Invalid !!! ";
			_getch();
		}
    }
    while(1);
    return 0;
}