//
// Julia Tzu-Ya Weng, U07487022
// julweng@gmail.com
// C/C++ Programming I : Fundamental Programming Concepts, 119877,
// Instructor: Raymond Mitchell
// Mar. 13, 2017
// C1A8E1_SavingsAccount.h
// Mac OS X
// Xcode Version 8.2.1
//
// description: This header file contains definition of the class SavingsAccount.
//

#ifndef C1A8E1_SAVINGSACCOUNT_H
#define C1A8E1_SAVINGSACCOUNT_H

const double PERCENT_CONVERSION = 0.01;

#include <string>

class SavingsAccount
{
private:
    int accountType;
    std::string ownerName;
    long IDnbr;
    double accountBalance, accountClosurePenaltyPercent;
public:
    void GetInitialValues();
    void DisplayValues() const;
    double CalculatePenalty() const
    {
        return(accountClosurePenaltyPercent * PERCENT_CONVERSION * accountBalance);
    }
};

#endif
