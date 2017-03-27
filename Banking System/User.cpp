#include"User.h"
#include<string>

User::User(string fName, string lName)
{
	firstName = fName;
	lastName = lName;
}

User::~User()
{
}
User::User() {

}
string User::GetFirstName() {
	return firstName;
}
string User::GetLastName() {
	return lastName;
}
