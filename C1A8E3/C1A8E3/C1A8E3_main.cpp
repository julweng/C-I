//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Mar. 13, 2017
// C1A8E3_main.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// program: search and replace characters
// description: This program reads a text file, performs a case-sensitve search for
// all occurrences of an arbitrary sequence of characters and replace them with another
// arbitrary sequence of characters written to an output file. This program receives
// command arguments, including including an input text file, an output text file,
// a sequence of characters to search for in the input file, and a sequence of characters
// to replace the searched characters in the output file.
//

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>

using namespace std;

const int INPUT_INDEX = 1, OUTPUT_INDEX = 2, SEARCHED_INDEX = 3, REPLACED_INDEX = 4;
const int ARGC_VALUE = 5, LINE_LENGTH = 256;

int main(int argc, char *argv[])
{
    //intialize placeholders for input and output files
    ifstream fIn;
    ofstream fOut;
    
    //checks for the correct number of arguments
    if (argc != ARGC_VALUE)
    {
        cerr << "\nThe correct number of arguments were not entered. Exiting...";
        exit(EXIT_FAILURE);
    }
    
    //attempt to open file fIn
    fIn.open(argv[INPUT_INDEX]);

    //test for fIn open success
    if (!fIn.is_open())
    {
        cerr << "\nCannot open file. Exiting...";
        exit(EXIT_FAILURE);
    }
    
    //attempt to open file fOut
    fOut.open(argv[OUTPUT_INDEX]);
    
    //test for fOut open success
    if (!fOut.is_open())
    {
        cerr << "\nCannot open file. Exiting...";
        exit(EXIT_FAILURE);
    }
    
    // initializes variables to store text entries from argv
    char searchedText[LINE_LENGTH], replacedText[LINE_LENGTH];
    strcpy(searchedText, argv[SEARCHED_INDEX]);
    strcpy(replacedText, argv[REPLACED_INDEX]);
    
    // store text length in variables
    int searchedTextLength = int(strlen(searchedText));
    int replacedTextLength = int(strlen(replacedText));

    //read text until EOF is reached
    char tmp[LINE_LENGTH];
    while (fIn.getline(tmp, LINE_LENGTH))
    {
        char *cp1;
        
        //strstr returns a pointer to the occurrence of searchedText found from the line being read
        for (cp1 = tmp; char *cp2 = strstr(cp1, searchedText);)
        {
            // write to fOut from where cp1 points to till where cp2 points to
            fOut.write(cp1, cp2 - cp1);
            
            //Write replacedText to output fOut
            fOut.write(replacedText, replacedTextLength);
            
            //update cp1
            cp1 = cp2 + searchedTextLength;
        }
        fOut << cp1 << '\n';
    }
    
    //close files
    fIn.close();
    fOut.close();
    
    return 0;
}
