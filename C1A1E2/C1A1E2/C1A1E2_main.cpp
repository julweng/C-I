//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Jan 24, 2017
// C1A1E2_main.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// program: decimal, octal and hexadecimal value conversion
// description: prompt user to enter a decimal integer value
// and output the decimal, octal and hexadeimal representations

#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::dec;
using std::oct;
using std::hex;

int main ()
{
    //prompt user for a decimal integer number
    cout << "Enter a decimal integer number: ";
    int userNum;
    cin >> userNum;
    
    //display the value in decimal, octal, hexidecimal
    cout << dec << userNum << " decimal = " << oct << userNum << " octal = " << hex << userNum << " hexadecimal\n";
    
    return EXIT_SUCCESS;
}
