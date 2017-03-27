#pragma once

#include "User.h"
#include <string>

using namespace std;

class BankAccount : public User
{
public:
	BankAccount(string fName, string lName, double balance);
	~BankAccount();
	double AvaialbleBalance();
	BankAccount();
	int GetAccountNumber();
private:
	User user;
	double balance;
	int accountNumber;
	int GenerateAccountNumber();
	
};


