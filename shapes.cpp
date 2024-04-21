#include <iostream>
#include <string>
using namespace std;


    
    double Square();
    double Rectangle();
    double Triangle();

    void Data(double&, double&);
    void Display_area(double);

 int main(){
   

    // asking the user to select from the list
    cout<<"Please select the area of the shape to calculate:"<< endl;
    cout<< "1.Square"<< endl;
    cout<< "2.Rectangle"<< endl;
    cout<< "3.Triangle"<< endl;
    cout<< "4.Quit Program"<< endl;
    cout<< "\n";
    int selection;
    cout<< "Enter selection:"<< endl;
    cin >> selection;

// Iterating through the options if condition holds true
    if(selection == 1){
        cout<< "The area is"<< Square();
    }
    else if(selection == 2){
        cout<< "The area is"<< Rectangle();
    }
    else if(selection == 3){
        cout << "The area is" << Triangle();
    }
    else if(selection == 4){
        cout << "Quit program \n";
    }
    else
    cout << "Invalid option \n";


}
// this function return the area of square
double Square(){
    double a, b ;
    Data(a,b);

    double num = a * b;
    Display_area(num);
        return num; 

}
// This function returns area of reactangle
double Rectangle(){
    double a,b;
     Data(a,b);
    double num = a * b;
    Display_area(num);
     return num;

}
// This function return area of triangle
 double Triangle(){
    double a,b;
     Data(a,b);
     double num = 0.5 * a * b;
     Display_area(num);
       return num;

}
void Data(double& a, double& b){
        cout<<"Enter the length of the sides: "<<endl;
        cin >> a >> b; 
    }
void Display_area(double num){
    cout<<  num<<endl;
}
