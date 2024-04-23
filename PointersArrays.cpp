#include <iostream>
using namespace std;

int main(){

int numbersArray[5];

int* pPointer = nullptr;

pPointer = numbersArray;

*pPointer = 10; // assign a value to the first element

/*increment the pointer using pointer arithmetic
to assign the address of the second element to the pointer*/
pPointer++;
*pPointer = 20; // assign a value to the second  element

//assign  the addresss of the third element to the pointer
pPointer = &numbersArray[2];
*pPointer = 30; //assign a value to the third element

/*assign the address of the fourth element to the pointer using
pointer arithmetic*/
pPointer =numbersArray + 3;
*pPointer = 40;

pPointer = numbersArray;

*(pPointer+4) = 50;

for(int n = 0 ; n< 5; n++){
    cout<< numbersArray[n ]<< " ,";
}
return 0;
}