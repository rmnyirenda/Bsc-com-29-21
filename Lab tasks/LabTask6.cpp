#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    string y;

    // setting pointers to null values
    int* num1 = nullptr;
    string* text = nullptr;

    cout<< "Enter an integer: "<< endl;
    cin>> x; 

    cout<< "Enter a text: "<<endl;
    cin>> y;

// using new keyword to dynamically allocate memory
    num1 = new int[x]; 
    text = new string(y);

    cout<< "The value of dynamically allocated integer is: "  <<num1 <<endl;
    cout<< "The value of dynamically allocated string is: "<< text << endl;  

    delete num1;
    delete text;

    return 0;                                                                                      
}