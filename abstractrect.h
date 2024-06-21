#pragma once
#include "abstract.h"
#include <string>

using namespace std;

class Rectangle : public Shape
{
public:
Rectangle(const float inLength, const float inWidth, const string inName);

float CalculateArea() override;
float  CalculatePerimeter() override;
void DrawShape() override;

private:
float mLength;
float mWidth;
};