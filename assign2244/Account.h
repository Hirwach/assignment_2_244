#pragma once

#ifndef Account_h
#define Account_h

class Account {

public:

    Account(double);
    void credit(double);
    bool debit(double);
    void setBalance(double);
    double getBalance();
    

private:

    double balance;


};
#endif /* Account_hpp */


