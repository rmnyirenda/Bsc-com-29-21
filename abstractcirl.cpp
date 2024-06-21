#include "abstractcircl.h"
#include <iostream>

using namespace std;

const float Circle::PI = 3.14f;

Circle::Circle(const float inRadius, const string inName) :Shape(inName)
{
    mRadius = inRadius;
}

float Circle::CalculateArea()
{
    return PI * (mRadius * mRadius);
}

float Circle::CalculatePerimeter()
{
    return 2.0f * PI * mRadius;
}

void Circle::DrawShape()
{
    cout <<"Draw CIRCLE"<<endl;
}