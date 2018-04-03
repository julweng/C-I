// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Feb 20, 2017
// C1A5E3_ComputeMinimum.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// description: This function compares two values pointed to by
// each of the two parameters, and return a pointer to a double that
// is the smallest of the two values.
//

double *ComputeMinimum(const double *val1, const double *val2)
{
    return (double *)(*val1 < *val2 ? val1 : val2);
}
