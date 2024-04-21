#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int vowelsNumber(string text);
int wordsNumber(string text);
string reverseWords(string text);
string capitalizeSecondLetter(string text);


int main(){
    fstream myFile("task.txt");

    if (myFile.is_open()){
        string fileData;
        getline(myFile,fileData);

        cout<< "The content is "<<fileData<<endl;
        cout<< "The number of vowels "<< vowelsNumber(fileData)<<endl;
        cout<< "The number of words " << wordsNumber(fileData)<<endl;
        cout<< "The text in reverse " << reverseWords(fileData)<<endl;
    }
    return 0;
}
int vowelsNumber(string text){
    int counter= 0;
    for(int i = 0; i < text.length(); i++){
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
int wordsNumber(string text){
    int counter = 0;
    bool num = false;
    for(int i =0; i< text.length(); i++){
        if(!(text[i]==' ') && num == false){
            num = true;
            counter ++;
        }
    else
    num = false;

    }
    return counter;
}
string reverseWords(string text){

    //assigning an empty string
    string sent = "";
    int n = 0;
    //this counts the string in reverse order
    while(n < text.length()){

        //size of array - subtract 1 since it starts counting at zero
        //minus n to iterate the loop and keep it in sent.
        sent = sent + text[text.length()-1-n];
        n++;
    }
    // + 0 is for first index
    return sent + "\0";
}
string capitalizeSecondLetter(string text){
    string output = "";

    for(int i = 0; i < text.length(); i++){
        
    }

}