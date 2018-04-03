//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Feb 13, 2017
// C1A4E2_PrintLines-3.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// description: This file contains a function that prints characters
// with a specified number of repeats on specified number of lines.
// The function has 3 type int parameters: The first parameter
// represent the character to be displayed; the second parameter is the
// number of times the character will be printed on a line; the third
// parameter represents the number of lines that will be displayed. Each
// line will be separated by a space.
//

#include <iostream>

void PrintLines (int ch, int repeat, int line)
{
    for (int block = 1; block <= line; ++block)
    {
        for (int print = 1; print <= repeat; ++repeat)
        {
            std::cout << char(ch);
        }
        std::cout << " ";
    }
    std::cout << '\n';
}
