#include <iostream>
using namespace std;

int main(){
    int arrayDimensions ;
    double x;
    double** dynamicValues = nullptr;

    cout<< "Enter dimensions of array: "<< endl;
    cin>> arrayDimensions;

    if (arrayDimensions >= 3){
        cout<< "Enter the value less than 3"<<endl;
        cin>> arrayDimensions;
    }

    cout<<"Enter size of rows & coulumns: "<<endl;
    cin >> x;
    dynamicValues = new double*[x];

    for (double i = 0; i< x; i++){
        
    for (int i = 0; i<arrayDimensions; i++){
        for (int j = 0; j< arrayDimensions; j++){
        cout <<" Enter elements"<< i << j;
        cin >> dynamicValues[i][j];
    }
    }
}
return 0;
}