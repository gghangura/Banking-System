#include"BankAccount.h"
#include <time.h>

BankAccount::BankAccount(string fName, string lName, double bal) : User(fName,lName)
{
	user = User(fName, lName);
	balance = bal;
	accountNumber = GenerateAccountNumber();
}
BankAccount::BankAccount() {

}

BankAccount::~BankAccount()
{

}

int BankAccount::GenerateAccountNumber()
{
	srand(time(NULL));
	int y = rand() % 10;;
	for (int i = 1; i < 6; ++i) {
		int x = rand() % 10;
		switch (i)
		{
		case 1:
			x = x * 10;
			break;
		case 2:
			x = x * 100;
			break;
		case 3:
			x = x * 1000;
			break;
		case 4:
			x = x * 10000;
			break;
		case 5:
			x = x * 100000;
			break;
		default:
			break;
		}
		
		y += x;
	}


	return y;
}
double BankAccount::AvaialbleBalance() {
	return balance;
}
int BankAccount::GetAccountNumber() {
	return accountNumber;
}


