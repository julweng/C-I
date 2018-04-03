//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Feb 13, 2017
// C1A4E3_PrintLines.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// description: This file contains a function that prints characters
// with a specified number of repeats on specified number of lines.
// The function takes 3 type int parameters: the first parameter
// takes the character to be displayed; the second parameter is the
// number of times the character will be printed on a line; the third
// parameter represents the number of lines that will be displayed. Each
// line will be separated by a space.
//

#include <iostream>

using std::cout;

void PrintLines(int charToPrint, int repeatNumber, int lineToDisplay)
{
    //loop through each line to be displayed
    for (int line = 1; line <= lineToDisplay; ++line)
    {
        //for each line, print the character a specified number of times
        for (int repeat = 1; repeat <= repeatNumber; ++repeat)        
        {
            cout <<  char(charToPrint);
        }
        cout << " ";
    }
    cout << '\n';
    return;
}
