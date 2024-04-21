#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int vowelsNumber(string text);
int wordsNumber(string text);

int main(){

fstream myFile("task.txt");

string fileData;

if (myFile.is_open()){

    getline(myFile, fileData);

    cout<< "The text is"<< fileData<< endl;
    cout<< "The number of vowels"<< vowelsNumber(fileData)<< endl;
}
return 0;
}
int vowelsNumber(string text){
    int counter= 0;

    for (int i=0; i< text.length(); i++){
        switch(text[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            counter++;
            break;
            default:
            break;
        }
    }
    return counter;
}