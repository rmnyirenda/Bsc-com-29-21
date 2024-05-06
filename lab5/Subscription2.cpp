#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    //assigning days of expiration between 0-11
    int daysUntilExpiration = rand() % 11;

    switch(daysUntilExpiration){

        case 0:
        cout<< "Your subscription will expire soon. Renew Now!";
        break;
        case 1:
        cout<< "Your subscription expires in " << daysUntilExpiration << endl;
        cout<< "Renew now and save 10%!";
        case 2:
        case 3:
        case 4:
        break;
        case 5:
        cout<< "Your subscription expires within a day! "<< endl;
        cout<< "Renew now and save 20%!";
        break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        cout<<"Your subscription  has expired";
        break;
        default :
        cout<<"You have an active subscription";
        break;
 
    }

}