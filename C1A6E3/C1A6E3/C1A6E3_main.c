/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877,
 * Instructor: Raymond Mitchell
 * Feb 20, 2017
 * C1A6E3_main.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * description: This program prompts the user for a string. Then, the
 * user will be prompted to specify a starting position from which to
 * extract the substring and number of characters to extract. The 
 * program will call the GetSubstring function to return the pointer that
 * points to the extracted substring.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_SIZE 128
#define LENGTH (LINE_SIZE * 2)

char *GetSubstring(const char source[], int start, int count, char result[]);

int main(void)
{
    /* get user string */
    char userString[LENGTH];
    printf("Enter a string: ");
    fgets(userString, LENGTH, stdin);
    
    /* replace newline with null terminator for userString */
    size_t length;
    length = strlen(userString);
    if (length != 0 && userString[length - 1] == '\n')
    {
        userString[--length] = '\0';
    }

    /* get user specified starting position and number of characters to extract */
    int start, count;
    printf("Enter the start index and number of characters to extract (separated by a space): ");
    scanf("%d %d", &start, &count);
    
    /* extract the characters to resultArray */
    char resultArray[LENGTH];
    
    printf("\"%s\", %d, %d, extracts \"%s\"\n", userString, start, count,
           GetSubstring(userString, start, count, resultArray));
    return 0;
}
