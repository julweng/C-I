//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Feb 13, 2017
// C1A4E4_main.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// program: Find maximum
// description: This program prompts the user to enter three deimal
// numeric values on the same line, each separated with a space on
// a line. The values will be compared by both macro mMaxOf3 and
// function fMaxOf3. The results will be printed.
//

#include <iostream>
#include "C1A4E4_MaxOf.h"

inline long double fMaxOf3(long double num1, long double num2, long double num3);

using namespace std;

int main()
{
    long double user_num1;
    long double user_num2;
    long double user_num3;
    
    
    cout << "Enter any 3 space-separated decimal numeric values: ";  //prompt user for 3 values
    cin >> user_num1 >> user_num2 >> user_num3;
    
    cout << "mMaxOf3(" << user_num1 << ", " << user_num2             //use mMaxOf3 to find max value
         << ", " << user_num3 << ") returned "
         << mMaxOf3(user_num1, user_num2, user_num3) << '\n';
    
    cout << "fMaxOf3(" << user_num1 << ", " << user_num2             //use fMaxOf3 to find max value
         << ", " << user_num3 << ") returned "
         << fMaxOf3(user_num1, user_num2, user_num3) << '\n';
    
    return 0;
}
