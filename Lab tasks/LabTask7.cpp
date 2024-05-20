#include "LabTask7.h"
#include "LabTask7.1.cpp"
#include <iostream>

using namespace std;

int main(){

Rectangle shape1;
Rectangle shape2;

float length =0.0;
float width = 0.0;

cout<<"Enter the values of length :"<<endl;
cin>> length ;
shape1.SetLength(length);

cout<<"Input the value of width"<<endl;
cin>> width;
shape1.SetWidth(width);

shape1.CalculateArea();

cout<<"The area of rectangle for shape1 is: "<< shape1.CalculateArea()<<endl;

shape2.CalculateArea();
cout<<"Enter the values of length :"<<endl;
cin>> length ;
shape2.SetLength(length);

cout<<"Input the value of width"<<endl;
cin>> width;
shape2.SetWidth(width);
cout<<"The area of rectangle for shape2 is: "<<shape2.CalculateArea()<<endl;

return 0;
}
