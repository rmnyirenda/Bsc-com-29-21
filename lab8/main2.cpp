#include <iostream>
#include "person.h"
#include "Person.cpp"

int main(){
    Person Jane = Person("Jane", 60.0f);
    Person John = Person ("John", 75.0);

    float totalWeight = Jane + John;

    cout<<"Total weight: "<< totalWeight<<endl;

    return 0;
}
