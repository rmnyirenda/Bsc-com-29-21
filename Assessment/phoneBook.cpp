#include "contact.h"
#include <iostream>
#include <fstream>
#include "phoneBook.h"

using namespace std;

int PhoneBook :: AddContact(){
    string firstName;
    string lastName;
    int phoneNumber;
   Contact  contacts[7];
    int phone = 0;
    


    bool contacts1 = false;
    for(int i= 0; i < contacts.length; i++){

            cout<< "Enter your firstName: "<<endl;
    cin >> firstName;

    cout<< "Enter your lastName: "<<endl;
    cin >> lastName;

    
    cout<< "Enter your phoneNumber: "<<endl;
    cin >> phoneNumber;
        
    if (contacts[i] === phoneNumber ){
        cout<<"The number arleady exists!, Enter another one"<<endl;
            contacts1 = true;
    }
    else {
        contacts[i]= phoneNumber;

        cout<< "Contact has been succefully assigned"<<endl;
    }
    phone += phone;
    cout << "The number of valid contacts assigned is: " << phone<<endl;
    }

    return(firstName,lastName,phoneNumber);
}

int PhoneBook :: SaveContactsToFile(){
    int phoneNumber;
    ofstream myfile("contacts.txt" );

    if (myfile.is_open()){
        getline(myfile,phoneNumber, ios::app);

    }
    else 
    cout<<"File failed to open"<<endl;
    return 0;
}
int PhoneBook:: ShowAllContacts(){
    string firstName;
    string lastName;
    int phoneNumber;
    Contact  contacts[7];
    int phone = 0;

    for (int i = 0; i< contacts.length; i++)
    cout<< contacts[i] <<endl;

    if (phone = 0){
        cout << "There no valid contacts to output"<< endl;
    }
    return contacts[i];
}
void PhoneBook :: Run(){
    int options = 4;
    cout << "Enter your option:"<<endl;
    cout<<"Options"<<endl;
    cout<<"1- Add a contact"<<endl;
    
    cout<<"2- Show all contacts"<<endl;
    
    cout<<"3- Save contacts to file"<<endl;
    
    cout<<"4- Quit"<<endl;
    cin >> options;

    switch (4){
        case 1 : cout << AddContact()<< endl;
        break;
        case 2 : cout << ShowAllContacts()<< endl;
        break;
        case 3: cout << SaveContactsToFile()<< endl;
        break;
        case 4 : cout <<exit ;

    }



}
