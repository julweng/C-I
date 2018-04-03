//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Jan 30, 2017
// C1A2E3_main.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// program: printing a right triangle pattern
// description:
// prompt the user to enter a positive decimal integer value and use that
// value as the height to print out a right triangle consisting of 2
// characters.

#include <iostream>
#include <cstdlib>

const char LEADER = '#';
const char DIAGONAL = '@';

using std::cout;
using std::cin;

int main()
{
    int diagonal, lines;
    cout << "how many diagonal characters: ";
    cin >> diagonal;
    
    for(lines = 0; lines < diagonal; ++lines)
    {
        int lead;
        for(lead = 0; lead < lines; ++lead)
        {
            cout << LEADER;
        }
        cout << DIAGONAL << '\n';
    }
    return EXIT_SUCCESS;
}

