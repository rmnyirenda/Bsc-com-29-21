#include <iostream>
#include <String>
using namespace std;

int main(){
//Declaring & initializing string elements
string text[8]={"B123","C234","A345","C15","B177","G3003","C235","B179"};
char letter = 'B';

int size = sizeof(text)/ sizeof(text[0]);

for(int n=0; n < size ; n++){

// storing the first strings in text2 in a loop
    string text2 = text[n];

    char textFirstLetter = text2[0];

//comparing if the string first letter with B 
    if(textFirstLetter == letter){

        cout << text2 << endl;
    }
}


}