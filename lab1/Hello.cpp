#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> msg{"Hello", "c++", "World", "from", "vs code", "and the c++ extension"};
    
    for (const string& word: msg){
        cout << word << " ";
    }
    cout << endl;
}