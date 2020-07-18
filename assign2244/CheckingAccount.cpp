
#include "CheckingAccount.h"
#include<iostream>
using namespace std;

CheckingAccount::CheckingAccount(double x, double f) : Account(x) {

    if (f > 0) {
        fee = f;
    }
    else {
        fee = 0;
        cout << "Error: The fee cannot be negative!";
    }
}
void CheckingAccount::credit(double y) {
    Account::credit(y);
    chargedfee();


}

bool CheckingAccount::debit(double x) {

    bool accept = Account::debit(x);
    if (accept) // if accept is true(ie if the member fuction debit returns true)
        chargedfee();
    else
        return false;

}

void CheckingAccount::chargedfee() {
    Account::setBalance(getBalance() - fee);
    cout << fee << "$ Charged for the transaction" << endl;
}

