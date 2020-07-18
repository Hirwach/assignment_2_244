#ifndef CheckingAccount_h
#define CheckingAccount_h
#include "Account.h"

class CheckingAccount :public Account {

public:
    CheckingAccount(double, double);
    void credit(double);
    bool debit(double);

private:

    void chargedfee();
    double fee;

};

#endif