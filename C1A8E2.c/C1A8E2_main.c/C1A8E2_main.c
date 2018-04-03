/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877,
 * Instructor: Raymond Mitchell
 * Mar 13, 2017
 * C1A8E2_main.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * program: open text file
 * description: this program receives two arguments from the command line: a text file name
 * and the number of lines to be displayed in one group. The arguments are separated by a 
 * whitespace. After each line-group is displayed, the user must press ENTER to display 
 * the next group. If less than the specified lines remains to be read from the text file,
 * the program will display the remaining file before exiting. If a key other than ENTER is
 * entered, then the program will exit following another ENTER. User may exit the program 
 * this way. If the proper number of arguments were not entered at the command line, or if 
 * the file fails to open, the program will exit with an error message.
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define ARGC_VALUE 3
#define FILE_INDEX 1
#define LINE_INDEX 2

int main(int argc, char *argv[])
{
    FILE *inFp;
    
    /* initialize variables for reading the file */
    int readChar, line_count = 0, line_to_display = atoi(argv[LINE_INDEX]);
    
    /* check for the correct number of command arguments */
    if (argc != ARGC_VALUE)
    {
        /* exit with error message if the correct number of command arguments were not entered */
        fprintf(stderr, "The correct number of command arguments were not entered. Exiting...\n");
        exit(EXIT_FAILURE);
    }
    
    /* test for file open success */
    if ((inFp = fopen(argv[FILE_INDEX], "r")) == NULL)
    {
        /* exit with error message if attempt to open file failed */
        fprintf(stderr, "Cannot open file. Exiting...\n");
        exit(EXIT_FAILURE);
    }

    /* read file until EOF is reached */
    while ((readChar = getc(inFp)) != EOF)
    {
        printf("%c", readChar);
        
        /* if reading reaches end of the line, do a line count */
        if (readChar == '\n')
        {
            line_count++;
        }
        
        /* when the specified number of lines finishes printing, prompt user for keyboard entry */
        if (line_count == line_to_display)
        {
            printf("\nPress ENTER to continue; press any other key to exit.\n");
            
            /* intialize another variable to get user response */
            int response = getchar();
            
            /* if response from user is ENTER or newline */
            if (response == '\n')
            {
                /* refresh line_count; continue displaying groups of lines from file */
                line_count = 0;
            }
            /* otherwise, exit from reading and displaying lines */
            else
            {
                break;
            }
        }
    }
    
    fclose(inFp);
    
    return 0;
}
