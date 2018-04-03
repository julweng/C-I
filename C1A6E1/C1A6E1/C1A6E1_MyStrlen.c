/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877,
 * Instructor: Raymond Mitchell
 * Feb 20, 2017
 * C1A6E1_MyStrlen.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * description: This file contains a function that calculates the 
 * length of a string. If the string is empty, a zero value will 
 * be returned.
 */

#include <stddef.h>

size_t MyStrlen(const char *string1)
{
    const char *pointer1 = string1;        /* pointer1 points to string1 */
    while (*pointer1 != '\0')              /* while null terminator has not been reached */
    {
        ++pointer1;                        /* count the number of characters */
    }
    return((size_t)(pointer1 - string1));
}
