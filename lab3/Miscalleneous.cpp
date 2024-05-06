#include<iostream>
using namespace std;

main(){

    //Local variable declaration
    int x, y = 10;
    x = (y<10) ? 30:40;
    cout<<"value of x ="<< x <<endl;

    //Checking the comma operator
    int i, j ;

    j = 10;
    i= (j++, j+100, 999+j);
    cout<< "value of i is :" << i << endl;

    //checking the cast operator
    double a = 21.0399;
    float b = 10.20;
    int c;

    c = (int) a;
    cout<< "Line 1- value of (int)a is :"<< c <<endl;

    c = (int) b ;
cout<< "Line 2 - value of (int)b is :"<< c <<endl;



    return 0;
}