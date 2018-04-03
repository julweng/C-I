//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Mar. 13, 2017
// C1A8E1_SavingsAccount.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// description: This file contains member functions of the class SavingsAccount.
// The GetInitialValues function prompts users to enter their savings account
// information, including account type, name of the account owner, ID number,
// account balance, and account closure penalty percent. The DisplayValues
// function prints user-entered account information.
//

#include <iostream>
#include <string>
#include "C1A8E1_SavingsAccount.h"

using namespace std;

//this function prompts users for account information
void SavingsAccount::GetInitialValues()
{
    //prompt user for account type
    cout << "Enter account type: ";
    cin >> accountType;
    
    //prompt user for account owner name; use ws to get rid of whitespace before reading in input
    cout << "Enter name of account owner: ";
    cin >> ws;
    getline(cin, ownerName);
    
    //prompt user for ID number
    cout << "Enter ID number: ";
    cin >> IDnbr;
    
    //prompt user for account balance
    cout << "Enter account balance: ";
    cin >> accountBalance;
    
    //prompt user for account closure penalty percent
    cout << "Enter account closure penalty percent: ";
    cin >> accountClosurePenaltyPercent;
}

//this function prints user-entered account information
void SavingsAccount::DisplayValues() const
{
    cout << "Account type is: " << accountType << '\n'
         << "Owner name is: " << ownerName << '\n'
         << "ID number is: " << IDnbr << '\n'
         << "Account balance is: " << accountBalance << '\n'
         << "Account closure penalty percent is: " << accountClosurePenaltyPercent << '\n';
}
