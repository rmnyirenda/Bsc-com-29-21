#pragma once 
#include <string>

using namespace std;

class Shape
{
public:
Shape(string inShapeName);
virtual ~Shape();
virtual void DrawShape();
virtual float CalculateArea();
virtual float CalculatePerimeter();

string GetShapeName() const;

private:
string mShapeName;
};

Shape:: Shape(string inShapeName)
{
    mShapeName = inShapeName;
}

Shape::~Shape()
{

}

void Shape::DrawShape()
{

}

float Shape::CalculateArea()
{
    return 0.0f;
}

float Shape::CalculatePerimeter()
{
    return 0.0f;
}

string Shape::GetShapeName() const{
    return mShapeName;
}