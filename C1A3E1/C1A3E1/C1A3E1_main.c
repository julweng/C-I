/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877,
 * Instructor: Raymond Mitchell
 * Feb 6, 2017
 * C1A3E1_main.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * program: computing factorials
 * description:
 * Prompts the user to enter an integer and output the factorial value of the 
 * integer. Maximum value of the factorial is supported by a type long variable, 
 * but the range could be extended by using type long long.
 *
 */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long factorial;
    int nbr, userNum;
    
    printf("Enter a number: ");
    scanf("%d", &userNum);
    
    printf("nbr        nbr!\n"
           "---        ----\n");
    
    for (factorial = 1L, nbr = 1; nbr <= userNum; ++nbr)
        printf("%2d%11ld\n", nbr, factorial *= nbr);
    
    return EXIT_SUCCESS;
}
