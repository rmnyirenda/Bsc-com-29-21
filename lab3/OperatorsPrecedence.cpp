#include<iostream>
using namespace std;

main(){
    int a =20;
    int b =15;
    int c = 10;
    int d =5;
    int e;

    e = (a + b) * c/d;
    cout<< "value of (a+b) * c/d is :"<< e <<endl;

    e =((a +b)* c)/d;
     cout<< "value of ((a+b) *c) /d is :"<< e <<endl;

     e= (a +b) * (c/ d);
      cout<< "value of (a+b) * (c/d) is :"<< e <<endl;

      e = a + (b*c)/ d;
       cout<< "value of a+ (b* c )/d is :"<< e <<endl;

       return 0;
}