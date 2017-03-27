#pragma once
#include <string>

using namespace std;

class User
{
public:
	User(string fName, string lName);
	User();
	~User();
	string GetFirstName();
	string GetLastName();


protected:
	string firstName;
	string lastName;
};