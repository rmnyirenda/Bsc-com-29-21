#pragma once
#include "contact.h"

using namespace std;

class PhoneBook{
private:
int phone;
 Contact contacts [7]; 


int AddContact();
int SaveContactsToFile();
int ShowAllContacts();

public:
PhoneBook();
void Run();


};