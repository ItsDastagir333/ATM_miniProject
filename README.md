
# ATM User Interface Software

This project is a C++ implementation of an ATM user interface software. The program emulates the functionality of an automated teller machine (ATM) user interface, allowing users to perform basic banking operations such as checking their balance, withdrawing cash, and updating their mobile phone number.

## Features

The program includes the following features:

- User authentication with account number and PIN
- Checking balance
- Withdrawing cash
- Displaying user details
- Updating user mobile number

## Usage

To use the program, simply compile the code and run the resulting executable file. The program will prompt the user to enter their account number and PIN to authenticate them. Once authenticated, the user can choose from the available options to perform banking operations.

### Option 1: Check balance

Selecting this option will display the user's current bank balance.

### Option 2: Cash withdraw

Selecting this option will prompt the user to enter the amount they wish to withdraw. If the entered amount is valid and the user has sufficient balance, the program will dispense the cash and update the user's balance.

### Option 3: Show user details

Selecting this option will display the user's account number, name, balance, and mobile phone number.

### Option 4: Update mobile number

Selecting this option will prompt the user to enter their old mobile number and their new mobile number. If the entered old mobile number matches the user's current mobile number, the program will update the user's mobile number.

### Option 5: Exit

Selecting this option will exit the program.

## Implementation

The program is implemented in C++, using object-oriented programming (OOP) principles. The main class, `atm`, encapsulates the user's account details and banking operations. User authentication is performed by comparing the entered account number and PIN with the account details stored in the program. The program uses the `conio.h` header file to implement a "press any key to continue" functionality after each user interaction.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use, modify, and distribute the code for any purpose.
