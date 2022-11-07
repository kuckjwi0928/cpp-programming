#include <iostream>

using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x = 0, int y = 0) : xpos(y), ypos(y)
    {}

    Point operator+(const Point &ref) const
    {
        return Point(xpos + ref.xpos, ypos + ref.ypos);
    }

    friend ostream &operator<<(ostream &os, const Point &ref);
};

ostream &operator<<(ostream &os, const Point &ref)
{
    os << '[' << ref.xpos << ", " << ref.ypos << ']' << endl;
    return os;
}

class Adder
{
public:
    int operator()(const int &n1, const int &n2)
    {
        return n1 + n2;
    }

    Point operator()(const Point &p1, const Point &p2)
    {
        return p1 + p2;
    }
};

int main(void)
{
    Adder adder;
    cout << adder(3, 4) << endl;
    cout << adder(Point(3, 4), Point(5, 6)) << endl;
}
