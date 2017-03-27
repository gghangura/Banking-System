// Banking System.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BankAccount.h"
#include <iostream>

using namespace std;
char DisplayMenu();
void DisplayAllAccounts(int size, BankAccount *accounts);
BankAccount MakeNewAccount();

int main()
{
	cout << "Welcome to Your Bank"<<endl;

	BankAccount *accounts = new BankAccount[5];

	int nOfAccounts = 0;

	for (;;)
	{
		char input = DisplayMenu();
		if (input == 'a')
		{
			if (nOfAccounts == 0)
			{
				cout << "Add Acounts First";
			}
			else
			{
				DisplayAllAccounts(nOfAccounts, accounts);
			}
		}
		else if (input == 'b')
		{
			if (nOfAccounts < 5)
			{
				BankAccount acc = MakeNewAccount();
				accounts[nOfAccounts] = acc;
				nOfAccounts++;
			}
			else
			{
				cout << "Cannot Add new Account";
			}
			
		}
		else if (input == 'c')
		{

		}
		else if (input == 'd')
		{
			break;
		}
	}
    return 0;
}

char DisplayMenu() {
	cout << endl << endl;
	cout << "Please Choose One Of the Options Below" << endl;
	cout << "a: Display all Accounts" << endl;
	cout << "b: Add a new Bank Account" << endl;
	cout << "c: Edit an existing Bank Account" << endl;
	cout << "d: Exit" << endl;
	char userInput;
	cin >> userInput;
	return userInput;
}

void DisplayAllAccounts(int size, BankAccount *accounts) {
	cout << endl << endl;
	for (int i = 0; i < size; i++)
	{
		BankAccount acc = accounts[i];
		cout << "First Name is: " << acc.GetFirstName() << endl;
		cout << "Last Name is: " << acc.GetLastName() << endl;
		cout.precision(17);
		cout << "Current Balance is: " << acc.AvaialbleBalance() << endl;
		cout << "Account Number is: " << acc.GetAccountNumber() << endl;
	}
}

BankAccount MakeNewAccount() {
	cout << endl << endl;
	string fName, lName;
	double initialBalance;
	cout << "Enter First Name"<<endl;
	cin >> fName;
	cout << "Enter Last Name" << endl;
	cin >> lName;
	cout << "Enter the Balance to keep after opening the Account" << endl;
	cin >> initialBalance;
	return BankAccount(fName, lName, initialBalance);
}


