#include "Box.h"
#include "Box.cpp"

//Main function for the program
int main(){
    Box Box1;  //declare box1 of type box
    Box Box2;  //declare box2 of type box
    Box Box3;  //declare box3 of type box
    double volume =0.0;

    //box 1 specificatiojn
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    //box 2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    //volume of box 1
    volume = Box1.GetVolume();
    cout<<"Voulem of Box1: "<<volume<<endl;

    //volume of box 2
    volume = Box2.GetVolume();
    cout<<"Voulem of Box2: "<<volume<<endl;

    //Add two objects as follows
    Box3 = Box1 + Box2;

    //volume of box 3
    volume = Box3.GetVolume();
    cout<<"Volume of Box3: "<<volume<<endl;

    return 0;
}