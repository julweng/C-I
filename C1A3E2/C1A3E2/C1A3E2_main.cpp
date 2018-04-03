//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Feb 6, 2017
// C1A3E2_main.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// program: reversing numbers
// description:
// This program prompts the user to enter an integer and reverses the digits
// of the enetered integer. For negative integers, the minus sign will be
// displayed last. If user enters -1230, the output will be:
// "-1230" in reverse is "0321-"
//

#include <iostream>
#include <cstdlib>

const int RADIX = 10;

using std::cout;
using std::cin;

int main()
{
    // prompt user for a number
    cout << "Enter a number: ";
    int userNum;
    cin >> userNum;
    
    // set up printing results
    cout << "\"" << userNum << "\" in reverse is \"";
    
    // if userNum is negative
    bool isNegative;
    if ((isNegative = userNum < 0))
        userNum = -userNum;
    
    // reverse number
    do
        cout << userNum % RADIX;
    while (userNum /= RADIX);
    
    if (isNegative)
        cout << "-";
    
    cout << "\"\n";
    
    return EXIT_SUCCESS;
}

