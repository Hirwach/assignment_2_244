#include <iostream>
#include "SavingAccount.h"
using namespace std;

SavingAccount::SavingAccount(double x, double y) : Account(x) {
    if (y > 0.0) {
        interestRate = y;

        cout << "\nThe amount on the CheckingAccount object is: " << getBalance() << "$ " << "and the interest rate is: " << interestRate << endl;
    }
    else {
        cout << "Interest rate cannot be negative";
    }
}
double SavingAccount::calculateInterest() {

    return  getBalance() * interestRate;

}