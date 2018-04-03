/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877,
 * Instructor: Raymond Mitchell
 * Feb 20, 2017
 * C1A6E3_GetSubstring.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * description: This file contains a function that copies characters
 * from a string, starting and ending at a specified position, to make
 * a new substring.
 */


char *GetSubstring(const char source[], int start, int count, char result[])
{
    char *str_result = result;
    
    /* get to the index start in source */
    while ((start != 0) && (*source != '\0'))
    {
        source++;
        start--;
    }
        
    /* copy number of characters indicated by count from source to result beginning at start */
    while ((count != 0) && (*source != '\0'))
    {
        *result++ = *source++;
        count--;
    }
    
    /* add null terminator to result */
    *result = '\0';
    
    return str_result;
}
