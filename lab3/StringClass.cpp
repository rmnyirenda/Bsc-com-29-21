#include<iostream>
#include<string>

using namespace std;
int main(){
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    //copying str1 int0 str3
    str3 = str1;
    cout<<"str3 = str1: "<< str3 <<endl;

    //concantenate str1 and str2
    str3 = str1 + str2;
    cout<<"str1 + str2: "<< str3 <<endl;

    //total length of str3 after concantenation
    len = str3.size();
    cout<<"str3.size(): "<< len <<endl;

    return 0;
}