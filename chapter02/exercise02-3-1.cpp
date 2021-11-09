#include<iostream>

using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2);

int main(void)
{
    const Point *p1 = new Point{1, 2};
    const Point *p2 = new Point{3, 4};
    const Point &ref1 = *p1;
    const Point &ref2 = *p2;
    Point &sum = PntAdder(ref1, ref2);
    cout<<sum.xpos<<sum.ypos;
    delete p1;
    delete p2;
    delete &sum;
}

Point& PntAdder(const Point &p1, const Point &p2)
{
    Point *newPoint = new Point {
        p1.xpos + p2.xpos,
        p1.ypos + p2.ypos
    };
    return *newPoint;
}
