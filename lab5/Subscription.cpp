#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

srand(time(NULL));
// assigning a random int between 0-11
int daysUntilExpiration = rand() % 11;

if(daysUntilExpiration <= 10){
cout<< "Your subscription will expire soon. Renew Now!"<< endl ;
}
else if(daysUntilExpiration <= 5){
    cout<< "Your subscription expires in " << daysUntilExpiration << endl;
    cout<< "Renew now and save 10%!"<< endl;
}
else if (daysUntilExpiration == 1){
    cout<< "Your subscription expires within a day! "<< endl;
    cout<< "Renew now and save 20%!"<< endl;
}
else if(daysUntilExpiration == 0){
    cout<<"Your subscription  has expired"<<endl;
}
else
cout<<"You have an active subscription"<<endl;
}