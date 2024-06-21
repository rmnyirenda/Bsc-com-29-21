#include "abstract.h"
#include "abstractcircl.h"
#include "abstractcirl.cpp"
#include "abstractrect.h"
#include <iostream>

using namespace std;

int main()
{
    //Shape shapeObject = Shape("shape");
    Shape* listOfShapes[2];

    listOfShapes[0] = new Rectangle(20.0f, 5.0f,"Rectangle");
    listOfShapes[1] = new Circle(6.0f, "Circle");

    float area = 0.0f;
    string name = "";

    for(int i =0; i<2; i++)
    {
        area = listOfShapes[i]->CalculateArea();
        name = listOfShapes[i]->GetShapeName();
        
        cout << "Area of "<< name << ":" << area << endl;
        listOfShapes[i]->DrawShape();
    }

    for (int j = 0; j<2; j++)
    {
        delete listOfShapes[j];
        listOfShapes[j] = nullptr;
    }
    return 0;
}