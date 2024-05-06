#include "LabTask7.h"
#include <iostream>
using namespace std;

//constructor definition
Rectangle :: Rectangle(){
    length = 0.0f;
    width = 0.0f;
}
Rectangle :: Rectangle(float length, float width){
this->length = length;
 this->width = width;

}
//implementing accessor methods
void Rectangle :: SetLength(float length){

    this->length = length;

}
float Rectangle :: GetLength(){
    return length;
}
//implementing accessor methods
void Rectangle :: SetWidth(float width){


    this->width=width;
}
float Rectangle :: GetWidth(){
    return width;
}
//implementing calculation of area
float Rectangle :: CalculateArea(){
  
    return (length * width);
}
//Destructor definition
Rectangle ::~Rectangle(){
    cout<<"This is a destructor";
}
