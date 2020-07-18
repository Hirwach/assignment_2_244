#include<iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"

using namespace std;

int main() {
	Account ac1(9900);

	//Testing function for an account
	cout << "Initial amount in the Account objet: " << ac1.getBalance() << "$" << endl;

	double addedcredit = 1020.00;
	double addeddebit = 100.00;
	ac1.credit(1020);
	ac1.debit(100);

	cout << "Balance of the account with credit and debit substracted: " << ac1.getBalance() << "$" << endl;

	cout << "Added credit on the account: " << addedcredit << "$" << endl;

	cout << "Substracted amount from the account: " << addeddebit << "$" << endl;

	
	//Testing member function for SavingAccounts
	SavingAccount sav1(80000.00, 0.10);

	cout << "The Balance of the SavingAccount object is: " << sav1.getBalance() << "$" << endl;

	cout << "The interest on the SavingAccount object is: " << sav1.calculateInterest() << "$" << endl;


	//Testing member fuction for CheckingAccount
	CheckingAccount check1(60000.00, 1000.00);
	cout << "\nInitial balance of the CheckingAccount object before any transaction " << check1.getBalance() << "$" << endl;

	check1.credit(1020);

	cout << "Initial balance of the account before the transaction with credit added and fee added" << check1.getBalance() << "$" << endl;

	check1.debit(100);

	cout << "The Balance of the account after checkout is: " << check1.getBalance() << "$" << endl;

	return 0;
}
