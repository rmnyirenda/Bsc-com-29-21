#include<iostream>
using namespace std;

main(){
    int a = 5;
    int b = 20;
    int c;

    if(a && b){
        cout<<"Line 1 - conditoin is true  "<< endl;
    }
    if(a || b){
          cout<<"Line 2 - conditoin is true  "<< endl;
    }
    /*Lets change the values of a and b*/
a =0 ;
b = 10;

if(a && b){
  cout<<"Line 3 - conditoin is true  "<< endl;
}
else{
    cout<<"Line 3 - conditoin is false  "<< endl;
}
if(!(a && b)){
    cout<<"Line  - conditoin is true  "<< endl;
}

return 0;

}