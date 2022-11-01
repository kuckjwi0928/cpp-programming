#include <iostream>
#include <cstdlib>

using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y)
    {}

    friend ostream &operator<<(ostream &os, const Point &ref);
};

ostream &operator<<(ostream &os, const Point &ref)
{
    os << ref.xpos << ", " << ref.ypos << endl;
    return os;
}

typedef Point POINT_PTR;

class BoundCheckPointArray
{
private:
    POINT_PTR *arr;
    int arrlen;

    BoundCheckPointArray(const BoundCheckPointArray &arr)
    {}

    BoundCheckPointArray &operator=(const BoundCheckPointArray &arr)
    {}

public:
    BoundCheckPointArray(int len) : arrlen(len)
    {
        arr = new POINT_PTR[len];
    }

    POINT_PTR &operator[](int idx)
    {
        if (idx < 0 || idx >= arrlen)
        {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return arr[idx];
    }

    POINT_PTR operator[](int idx) const
    {
        if (idx < 0 || idx >= arrlen)
        {
            cout << "Array index out of bound exception" << endl;
            exit(1);
        }
        return arr[idx];
    }

    int GetArrLen() const
    {
        return arrlen;
    }

    ~BoundCheckPointArray()
    {
        delete[]arr;
    }
};

int main(void)
{
    BoundCheckPointArray arr(3);
    arr[0] = Point(3, 4);
    arr[1] = Point(5, 6);
    arr[2] = Point(7, 8);

    for (int i = 0; i < arr.GetArrLen(); i++)
        cout << arr[i];

    return 0;
}
