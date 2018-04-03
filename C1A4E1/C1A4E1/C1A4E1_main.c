/*
 * Julia Tzu-Ya Weng, U07487022
 * julweng@gmail.com
 * C/C++ Programming I : Fundamental Programming Concepts, 119877,
 * Instructor: Raymond Mitchell
 * Jan 30, 2017
 * C1A4E1_main.c
 * Mac OS X
 * Xcode Version 8.2.1
 *
 * program: find maximum and minimum
 * description: prompt the user to enter two decimal numeric values 
 * separated by a space on the same line. The two values are compared
 * using two functions. The ComputeMinimum function identifies the 
 * smallest of the two values. The ComputeMaximum function identifies 
 * the greatest of the two values.
 */

#include <stdio.h>
#include <stdlib.h>

double ComputeMinimum(double num1, double num2);

double ComputeMaximum(double num1, double num2);

int main(void)
{
    //prompt user for numbers
    printf("Enter two numbers: ");
    double num1, num2;
    scanf("%lf %lf", &num1, &num2);
    
    //find and print minimum
    printf("ComputeMinimum(%lf, %lf) returned %lf\n", num1, num2, ComputeMinimum(num1, num2));
    
    //find and print maxim
    printf("ComputeMaximum(%lf, %lf) returned %lf\n", num1, num2, ComputeMaximum(num1, num2));
    
    return EXIT_SUCCESS;
}
