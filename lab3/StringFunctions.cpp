#include<iostream>
#include<cstring>

using namespace std;
int main(){
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10];
    int len;

    //copying str1 int0 str3
    strcpy( str3, str1);
    cout<<"strcpy(str3,str1): "<< str3 <<endl;

    //concantenate str1 and str2
    strcat(str1,str2);
    cout<<"strcat(str1,str2): "<< str1 <<endl;

    //total length of str1 after concantenation
    len = strlen(str1);
    cout<<"strlen(str1): "<< len <<endl;

    return 0;
}