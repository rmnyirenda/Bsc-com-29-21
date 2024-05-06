#include "person.h"

Person::Person(){
    mWeight =0.0;
    mFirstName = "";
    mAge = 0;
}
Person:: Person(float newWeight){
    mWeight = newWeight;
}
float::Person:: operator + (const Person& otherPerson){
        
//getting weight for jane and other person which is john and  add
// this is an address to weight of jane
        float totalWeight = this->mWeight + otherPerson.mWeight;

        //return  a float as expected
        return totalWeight;
}
Person::~Person(){

}