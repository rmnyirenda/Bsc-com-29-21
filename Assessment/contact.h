#pragma once
#include <string>

using namespace std;

class Contact {
private:
string firstName;
string lastName;
int phoneNumber;

public:
Contact();

Contact(string newFirstName,string newLastName, int newPhoneNumber);

 void SetfirstName(string firstName);
string GetfirstName();

 void SetlastName(string firstName);
string GetlastName();

 void SetphoneNumber(string firstName);
string GetphoneNumber();

};