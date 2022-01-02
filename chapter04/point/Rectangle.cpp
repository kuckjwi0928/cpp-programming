#include <iostream>
#include "Rectangle.h"

using namespace std;

// member initializer
Rectangle::Rectangle(const int x1, const int y1, const int x2, const int y2) : upLeft(x1, y1), lowRight(x2, y2) {}

void Rectangle::ShowRecInto() const
{
    cout<<"좌 상단: "<<upLeft.GetX()<<","<<upLeft.GetY()<<endl;
    cout<<"우 하단: "<<lowRight.GetX()<<","<<lowRight.GetY()<<endl;
}
