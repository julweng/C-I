//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Feb 13, 2017
// C1A4E2_PrintLines-2.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// description: This file contains a function that prints characters
// with a specified number of repeats on a line. The function has 2
// type int parameters: the first parameter takes the character to be
// displayed; the second parameter is the number of times the character
// will be displayed on a line.
//

#include <iostream>

void PrintLines(int ch, int repeat)
{
    for(int print = 1; print <= repeat; ++print)
    {
        std::cout << (char)ch;
    }
    std::cout << '\n';
}
