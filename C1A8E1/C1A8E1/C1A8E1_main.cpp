//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Mar. 13, 2017
// C1A8E1_main.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// program: account closure penalty calculation
// description: This program uses the data members and function members of the class
// SavingsAccount to obtain user's savings account information, calculate and
// display the account closure penalty.
//

#include <iostream>
#include "C1A8E1_SavingsAccount.h"

using namespace std;

int main()
{
    // declare object of SavingsAccount
    SavingsAccount accountInfo;
    
    // prompt user for account information
    accountInfo.GetInitialValues();
    
    // display user-entered information
    accountInfo.DisplayValues();
    
    // calculate and disaply account closure penalty
    cout << "Account closure penalty is: " << accountInfo.CalculatePenalty() << '\n';
    
    return 0;
}
