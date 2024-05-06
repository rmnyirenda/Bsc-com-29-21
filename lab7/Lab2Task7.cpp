#include <iostream>
#include "Lab2Task7.h"
#include "Lab2.1Task7.cpp"
using namespace std;


int main(){
     float sideLength;
     int base;
     int height;
     double radius;

      // asking the user to select from the list
    cout<<"Please select the area of the shape to calculate:"<< endl;
    cout<< "1.Calculate the area of Square"<< endl;
    cout<< "2.Calculate the area of Triangle"<< endl;
    cout<< "3.Calculate the area of Circle"<< endl;
    cout<< "4.Quit "<< endl;
    cout<< "\n";
    int selection;
    cout<< "Enter selection:"<< endl;
    cin >> selection;

 

// Iterating through the options if condition holds true
    if(selection == 1){
        shapes:: Square squareShape;
        cout<<"Enter the value of sidelength: "<< endl;
        cin>> sideLength;
        cout<< "The area of square is"<< shapes::Area::calculateAreaSquare();
    }
    else if(selection == 2){
        shapes:: Triangle triangleShape;
        cout<<"Enter the values of base and height: "<< endl;
        cin>> base, height;
        cout<< "The area of triangle is"<< shapes::Area::calculateAreaTriangle();
    }
    else if(selection == 3){
        shapes:: Circle circleShape;
        cout<<"Enter the value of radius: "<< endl;
        cin>> radius;
        cout << "The area of circle is" << shapes::Area::calculateAreaCircle();
    }
    else if(selection == 4){
        cout << "Quit program \n";
    }
    else
    cout << "Invalid option \n";

    
    return 0;
}
