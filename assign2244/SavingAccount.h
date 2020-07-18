#pragma once
#include "Account.h"
#ifndef SavingsAccount_h
#define SavingsAccount_h
class SavingAccount : public Account {

public:

    SavingAccount(double, double);
    double calculateInterest();


private:
    double interestRate;


};
#endif
