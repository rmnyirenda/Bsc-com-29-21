#include "Lab2Task7.h"


void Shapes :: Square:: SetsideLength(float mSideLength){
    if(msideLength >0){
        sideLength = mSideLength;
    }
}
float Shapes:: Square:: GetsideLength(){
    return sideLength;
}
float Shapes::Square::calculateAreaSquare(Square sideLength){
    return Multiply(sideLength * sideLength);
}
void Shapes:: Triangle:: Setbase(int SideBase){
    if(sideBase >0){
        base = SideBase;
    }
}
int Shapes:: Triangle:: Getbase(){
    return base;
}

void Shapes:: Triangle:: Setheight(int SideHeight){
    if(sideBase >0){
        height = SideHeight;
    }
}
int Shapes:: Triangle:: Getheight(){
    return height;
}
int Shapes::Square::calculateAreaTriangle(Triangle base, Rectangle height){
    return Multiply(base * height *0.5);
}
void Shapes:: Circle:: Setradius(double mRadius){
    if(mRadius >0){
        radius = mRadius;
    }
}
float Shapes:: Circle:: Getradiud(){
    return radius;
}
float Shapes::Square::calculateAreaCircle(Circle radius){
    return Multiply(3.14* radius * radius);
}