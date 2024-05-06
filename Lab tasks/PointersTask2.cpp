#include <iostream>
using namespace std;

int main(){
    int firstValue ;
    int secondValue;

//assigng a null value
    int* pPointer = nullptr;
     
     // assign pointer with address of firstvalue
     pPointer = &firstValue;
     *pPointer = 10;//indirection

//assign pointer with the address of secondvalue
     pPointer = &secondValue;
     *pPointer = 20;//indirection

     cout<< "firstValue: "<< firstValue << '\n';
     cout<< "secondValue: "<< secondValue << '\n';
}