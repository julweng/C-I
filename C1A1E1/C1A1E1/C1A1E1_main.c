/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877, 
 * Instructor: Raymond Mitchell
 * Jan 24, 2017
 * C1A1E1_main.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * program: print text
 * description: 
 * a block of text is printed by a single printf()
 * %c, %s, or %[] are not used
 */

#include <stdio.h>
#include <stdlib.h>
#define FIRST_PERCENT 10
#define SECOND_PERCENT 100

int main(void)
{
    printf("In C/C++ the case of letters is significant.\n"
           "main is where program execution begins.\n"
           "A semicolon terminates most statements.\n"
           "%d%% of \"nothing\" is %d%% of \"nothing\".\n"
           "Use \\n to cause a newline; use \\t to cause a tab.\n"
           "Use \\a to cause a beep (only on some platforms)!\n",
           FIRST_PERCENT, SECOND_PERCENT);

    return EXIT_SUCCESS;
}
