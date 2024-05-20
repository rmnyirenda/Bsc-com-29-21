#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main(){
    Rectangle rect;
    Triangle trigl;
    rect.SetValues(4,5);
    trigl.SetValues(4,5);
    cout<<rect.Area()<< '\n';
    cout<<trigl.Area()<< '\n';
    return 0;
}