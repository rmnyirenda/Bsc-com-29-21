#include <iostream>
using namespace std;

void swapNumbers(int *A, int *B);
int main(){

    int varA = 25;
    int varB = 100;

    cout << "Before swap varA: "<< varA<< endl;
    cout << "Before swap varB: "<< varB<< endl;

swapNumbers(&varA, &varB);

    cout << "After swap varA: "<< varA<< endl;
    cout << "After swap varB: "<< varB<< endl;

    return 0;
}
void swapNumbers(int *A, int *B){
    int temp = *A;
    *A = *B;
    *B = temp;
}