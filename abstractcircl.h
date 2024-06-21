#pragma once
#include "abstract.h"

class Circle : public Shape
{
public: 
Circle(const float inRadius, const string inName);

float CalculateArea() override;
float CalculatePerimeter() override;
void DrawShape() override;

private:
const static float PI;
float mRadius;
};