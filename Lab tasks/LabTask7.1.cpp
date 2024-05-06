#include "LabTask7.h"
#include <iostream>
using namespace std;

//constructor definition
Rectangle :: Rectangle(){
    length = 0;
    width = 0;
}
Rectangle :: Rectangle(float newLength, float newWidth){

    cout<<"Enter the value of length:"<<endl;
    cin>>length;
    length = newLength;

    cout<<"Enter the value of widthth:"<<endl;
    cin>>width;
    width = newWidth;
}
//implementing accessor methods
void Rectangle :: SetLength(float newLength){
    cout<<"Input the value of length"<<endl;
    cin>> length;
    newLength = length;

}
float Rectangle :: GetLength(){
    return length;
}
//implementing accessor methods
void Rectangle :: SetWidth(float newWidth){

    cout<<"Input the value of width"<<endl;
    cin>> width;
    newWidth=width;
}
float Rectangle :: GetWidth(){
    return width;
}
//implementing calculation of area
float Rectangle :: CalculateArea(float a, float b){
  
    return (length * width);
}
//Destructor definition
Rectangle ::~Rectangle(){
    cout<<"This is a destructor";
}
