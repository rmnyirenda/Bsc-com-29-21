#include "LabTask7.h"
#include "LabTask7.1.cpp"
#include <iostream>

using namespace std;

int main(){

Rectangle shape1;
Rectangle shape2;

shape1.SetLength();

shape1.SetWidth();

shape1.CalculateArea();

cout<<"The area of rectangle is: "<< shape1.GetLength()<<endl;
return 0;
}
