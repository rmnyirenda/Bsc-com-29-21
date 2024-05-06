#pragma once
using namespace std;
class Rectangle
{
    
    private:
    float length;
    float width;
    

    public:
    Rectangle();
    Rectangle(float newLength, float newWidth);
    void SetWidth(float newWidth);
    float GetWidth();

    void SetLength(float newLength);
    float GetLength();

    float CalculateArea();
    ~Rectangle();
};