//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Feb 6, 2017
// C1A3E3_main.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// program: number into words
// description:
// This program prompts user to enter an integer value, and the numeric value of
// each digit is converted into texts. For negative values, the word "minus"
// will precede the translated text.
//

#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;

const int RADIX = 10;
const int DIVIDEND_LIMIT = RADIX - 1;

int main()
{
    // prompt user for a number
    cout << "Enter an integer: ";
    int userNum;
    cin >> userNum;
    
    // set up printing result
    cout << "\"" << userNum << "\" in words is \"";
    
    // if userNum is negative
    if (userNum < 0)
    {
        userNum = -userNum;
        cout << "minus ";
    }
    
    // find divisor
    int divisor = 1;
    for (int dividend = userNum; dividend > DIVIDEND_LIMIT; dividend /= RADIX)
        divisor *= RADIX;
    
    // get most significant number and cout text
    
    do
    {
        int msd = userNum / divisor;
        
        switch (msd)
        {
            case 0: cout << "zero"; break;
            case 1: cout << "one"; break;
            case 2: cout << "two"; break;
            case 3: cout << "three"; break;
            case 4: cout << "four"; break;
            case 5: cout << "five"; break;
            case 6: cout << "six"; break;
            case 7: cout << "seven"; break;
            case 8: cout << "eight"; break;
            case 9: cout << "nine"; break;
        }
        
        // delete msd
        userNum -= msd * divisor;
        
        // reduce divisor
        divisor /= RADIX;
    
        if (divisor)
            cout << " ";
        
    } while (divisor);
    
    cout << "\"\n";
    
    return EXIT_SUCCESS;
}
