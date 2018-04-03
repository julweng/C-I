//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Feb 13, 2017
// C1A4E3_main.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// program: print character
// description: This program prompts the user for the following input
// values in order, with a space separating each entry:
// 1. the character to be displayed
// 2. the number of times the character is to be displayed
// 3. the number of lines to be displayed
// For each iteration, the program will call the PrintLines function, which will
// print a user-entered character with user-specified number of repeats and lines.
// For example, PrintLines('A', 2, 3) should output AA AA AA. Default value for
// the first, second, and third parameters are 'Z', 1, and 1, respectively.
// If user does not enter values, the program will print 'Z' at least once on a line.
//

void PrintLines(int charToPrint = 'Z', int repeatNumber = 1, int lineToDisplay = 1);

#include <iostream>

using namespace std;

const int ITERATION_NUM = 5;

int main()
{
    for (int loopCount = 0; loopCount < ITERATION_NUM; ++loopCount)
    {
        char characterToDisplay;
        int numberOfCharacters;
        int numberOfLines;
        
        cout << "Enter the following in order and"                              //prompt user for input
        " separate each entry with a space:\n"
        "Character to be displayed,\n"
        "Number of times to display the character,\n"
        "Number of lines to be displayed:\n";
        cin >> characterToDisplay >> numberOfCharacters >> numberOfLines;
        
        PrintLines(int(characterToDisplay), numberOfCharacters, numberOfLines); //print characters on lines
        
        PrintLines(int(characterToDisplay), numberOfCharacters);                //print characters on one line
        
        PrintLines(int(characterToDisplay));                                    //print character once
        
        PrintLines();                                                           //print 'Z' 
    }
    return 0;
}
