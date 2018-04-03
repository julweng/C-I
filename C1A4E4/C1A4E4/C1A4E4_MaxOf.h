//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Feb 13, 2017
// C1A4E4_MaxOf.h
// Mac OS X
// Xcode Version 8.2.1
//
// description: this header file contains 2 function-like macros and 2
// inline functions: mMaxOf2, mMaxOf3, fMaxOf2, fMaxOf3. Macro mMaxOf2
// takes two int type values as parameters and determines the maximum of
// the two values. Macro mMaxOf3 takes three int type values and uses
// mMaxOf2 to find the maximum of the three values. Inline function
// fMaxOf2 takes 2 int type values as parameters, compares and determines
// the maximum of the two values. Inline function fMaxOf3 takes 3 int type
// values as parameters and uses fMaxOf2 to determine the maximum of the
// three values.
//

#ifndef C1A4E4_MAXOF_H
#define C1A4E4_MAXOF_H

#define mMaxOf2(num1, num2) (((num1) > (num2)) ? (num1) : (num2))
#define mMaxOf3(num1, num2, num3) (mMaxOf2(mMaxOf2((num1), (num2)), (num3)))

inline long double fMaxOf2(long double num1, long double num2)
{
    //compares two values and returns the greatest of the two
    return((num1 > num2) ? num1 : num2);
}

inline long double fMaxOf3(long double num1, long double num2, long double num3)
{
    //makes use of function fMaxOf2 to compare among three values and return the greatest of the three
    return(fMaxOf2(fMaxOf2(num1, num2), num3));
}
#endif
