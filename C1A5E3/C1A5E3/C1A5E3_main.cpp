//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Feb 20, 2017
// C1A5E3_main.cpp
// Mac OS X
// Xcode Version 8.2.1
//
// program: find maximum and minimum
// description: prompt the user to enter two decimal numeric values
// separated by a space on the same line. The two values are compared
// using two functions. The ComputeMinimum function identifies the
// pointer that points to the smallest of the two values. The
// ComputeMaximum function identifies the pointer that points to the
// greatest of the two values.
//

#include <iostream>
#include <cstdlib>

double *ComputeMinimum(const double *val1, const double *val2);
double *ComputeMaximum(double const *val1, const double *val2);

using std::cout;
using std::cin;

int main()
{
    cout << "Enter two numbers: ";
    double val1, val2;
    cin >> val1 >> val2;
    
    cout << "ComputeMinimum(&" << val1 << ", &" << val2 << ") returned " <<
    *ComputeMinimum(&val1, &val2) << '\n';
    
    cout << "ComputeMaximum(&" << val1 << ", &" << val2 << ") returned " <<
    *ComputeMaximum(&val1, &val2) << '\n';
    
    return EXIT_SUCCESS;
}
