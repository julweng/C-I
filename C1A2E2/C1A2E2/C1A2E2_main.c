/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877,
 * Instructor: Raymond Mitchell
 * Jan 30, 2017
 * C1A2E2_main.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * program: printing a right triangle pattern
 * description:
 * prompt the user to enter a positive decimal integer value and use that
 * value as the height to print out a right triangle
 * @
 * #@
 * ##@
 * ###@
 */

#include <stdio.h>
#include <stdlib.h>

#define LEADER '#'
#define DIAGONAL '@'

int main(void)
{
    int diagonal;
    printf("How many diagonal characters: ");
    scanf("%d", &diagonal);
    
    for(int lines = 0; lines < diagonal; ++lines)
    {
        for(int leader = 0; leader < lines; ++leader)
        {
            printf("%c", LEADER);
        }
        printf("%c\n", DIAGONAL);
    }
    
    return EXIT_SUCCESS;
}

