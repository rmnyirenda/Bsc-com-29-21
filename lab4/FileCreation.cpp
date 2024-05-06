#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //create and open a text file
    ofstream MyFile;

    //opening a file and specifying the mode
    MyFile.open("exampleFile.txt",ios::out | ios::ate);

    if(!MyFile.is_open())
cout<<"the file failed to open"<< endl;

//write to file
MyFile <<"write to the file....!\n";
MyFile <<"write to the file....!\n";

    //close the file
    MyFile.close();

    return 0;
}