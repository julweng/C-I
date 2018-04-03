/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877,
 * Instructor: Raymond Mitchell
 * Feb 20, 2017
 * C1A6E2_MyStrcmp.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * description: This file contains a function that compares the characters
 * in two strings. If the characters are equal, the value returned is equal
 * to zero. If a mismatched character occurrs, the value returned is less 
 * than zero if that character in string1 is less than that in string2, 
 * and vice versa.
 */


int MyStrcmp(const char *string1, const char *string2)
{   /* while the null terminator in string1 has not been encountered */
    while (*string1 != '\0')
    {
        /* if the character in string2 is not a null terminator */
        /* or if the mismatched character is greater in string1 compared to string2 */
        if (*string2 == '\0' || *string1 > *string2)
        {
            return 1;
        }
        /* if the mismatched character is less in string1 compared to string2 */
        else if (*string1 < *string2)
        {
            return -1;
        }
        else
        {
            string1++;
            string2++;
        }
    }
    /* if the null terminator in string1 has been encoutered */
    /* but the null terminator in string2 has not been reached */
    if (*string2 != '\0')
    {
        return -1;
    }
    return 0;
}
