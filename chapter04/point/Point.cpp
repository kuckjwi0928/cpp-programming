#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(int xpos, int ypos)
{
    x = xpos;
    y = ypos;
}

int Point::GetX() const
{
    return x;
}

int Point::GetY() const
{
    return y;
}

bool Point::SetX(int xpos)
{
    if (0 > xpos || xpos > 100) {
        return false;
    }
    x = xpos;
    return true;
}

bool Point::SetY(int ypos)
{
    if (0 > ypos || ypos > 100) {
        return false;
    }
    y = ypos;
    return true;
}
