//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Jan 30, 2017
// C1A2E1_main.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// program: uppercase to lowercase character conversion
// description: prompt user to enter a character and convert
// the character to lowercase
//

#include <iostream>
#include <cstdlib>

const int CASEDIFF = 'a' - 'A';

int main()
{
    std::cout << "Enter a character: ";
    char userCh = (char)std::cin.get();
    std::cout << "\"" << userCh << "\" in lowercase is \"" << char(userCh + CASEDIFF) << "\"\n";
    return EXIT_SUCCESS;
}
