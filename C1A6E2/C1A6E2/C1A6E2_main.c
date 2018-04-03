/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877,
 * Instructor: Raymond Mitchell
 * Feb 20, 2017
 * C1A6E2_main.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * program: compare two strings
 * description: This program prompts users for two strings and compares the
 * characters in the two strings using the strcmp function and MyStrcmp
 * function. If the contents of the two strings are equal, both functions 
 * should return a value of zero. When a mismatch occurs, if that character
 * in the first string is greater than that of the second string, the value 
 * returned will be greater than 0. If that character in the first string is 
 * less than that of the second string, the value returned will be less than 
 * zero.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 129

int MyStrcmp(const char *string1, const char *string2);

int main(void)
{
    /* prompt user for first string */
    char userString1[LENGTH];
    printf("Enter first string: ");
    fgets(userString1, LENGTH, stdin);
    
    /* prompt user for second string */
    char userString2[LENGTH];
    printf("Enter second string: ");
    fgets(userString2, LENGTH, stdin);
    
    /* replace newline with null terminator for userString1 and userString2*/
    size_t length1, length2;
    
    length1 = strlen(userString1);
    if (length1 != 0 && userString1[length1 - 1] == '\n')
    {
        userString1[--length1] = '\0';
    }
    
    length2 = strlen(userString2);
    if (length2 != 0 && userString2[length2 - 1] == '\n')
    {
        userString2[--length2] = '\0';
    }

    /* use strcmp to compare strings */
    printf("strcmp(\"%s\", \"%s\") returned %d\n", userString1, userString2,
           strcmp(userString1, userString2));
    
    /* use MyStrcmp to compare strings */
    printf("MyStrcmp(\"%s\", \"%s\") returned %d\n", userString1, userString2,
           MyStrcmp(userString1, userString2));
    return 0;
}
