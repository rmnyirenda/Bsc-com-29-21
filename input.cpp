#include <iostream>
using namespace std;

int main(){

    int num ;
    int max = 10;
    int min = 5;
   cout<<"Enter an integer value between 5 and 10" << endl;
    cin >> num; 


// comparing the number the user inputed with the max & min values
    while (num <= 5 && num >= 10)
    { 
    cout << "Sorry, you entered an invalid number, please try again"<< endl;
    
    cin >> num;
    cin.clear();
    cin.igonre(numeric_limits<streamsize>::max(),'\n');
     
    }
    
        cout<<"Your input value "<< num <<" has been accepted.";
    
    return 0;

}