#include <iostream>
#include "polygon.h"

using namespace std;

void Polygon::SetValues(int width, int height){
    mWidth = width;
    mHeight = height;
}
void Polygon:: printArea()
{
    cout << this ->Area() << '\n';
}