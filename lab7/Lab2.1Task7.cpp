#include "Lab2Task7.h"

void shapes :: Square:: SetsideLength(float sidelength){
    if(sideLength >0){
        this->sideLength = sidelength;
    }
}
float shapes:: Square:: GetsideLength(){
    return sideLength;
}
float shapes::Area::calculateAreaSquare(){
    float sideLength;
    return (sideLength * sideLength);
}

void shapes:: Triangle:: Setbase(int SideBase){
    if(SideBase >0){
        this->base = SideBase;
    }
}
int shapes:: Triangle:: Getbase(){
    return base;
}

void shapes:: Triangle:: Setheight(int SideHeight){
    if(SideHeight >0){
        this->height = SideHeight;
    }
}
int shapes:: Triangle:: Getheight(){
    return height;
}
int shapes::Area::calculateAreaTriangle(){
    int base;
    int height;
    return (base* height *0.5);
}
void shapes:: Circle:: Setradius(double radius){
    if(radius >0){
        this->radius = radius;
    }
}
double shapes:: Circle:: Getradius(){
    return radius;
}
double shapes::Area::calculateAreaCircle(){
    double radius;
    return (3.14 * radius * radius);
}