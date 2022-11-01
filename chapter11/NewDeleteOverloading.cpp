#include <iostream>

using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x = 0, int y = 0) : xpos(x), ypos(y)
    {}

    friend ostream &operator<<(ostream &os, const Point &ref);

    static void *operator new(size_t size)
    {
        cout << "operator new: " << size << " bytes" << endl;
        return new char[size];
    }

    static void operator delete(void *addr)
    {
        cout << "operator delete" << endl;
        delete[]addr;
    }
};

ostream &operator<<(ostream &os, const Point &ref)
{
    os << ref.xpos << "," << ref.ypos << endl;
    return os;
}

int main(void)
{
    Point *ptr = new Point(3, 4);
    cout << *ptr;
    delete ptr;
    return 0;
}
