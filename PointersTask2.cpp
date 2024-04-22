#include <iostream>
using namespace std;

int main(){
    int firstValue ;
    int secondValue;

    int* pPointer = nullptr;
     
     // assign pointer with address of firstvalue
     pPointer = &firstValue;
     *pPointer = 10;

//assign pointer with the address of secondvalue
     pPointer = secondValue;
     *pPointer = 20;

     cout<< "firstValue: "<< firstValue << '\n';
     cout<< "secondValue: "<< secondValue << '\n';
}