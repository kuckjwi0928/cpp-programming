#include <iostream>

using namespace std;

class Point
{   
    private:
        int xpos, ypos;
    public:
        void Init(int x, int y) 
        {
            this->xpos = x;
            this->ypos = y;
        }
        void ShowPointInfo() const
        {
            cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
        }
};

class Ring
{
    private:
        Point inner;
        Point outer;
        int radius;
        int oradius;
    public:
        void Init(const int xpos, const int ypos, const int radius, const int oxpos, const int oypos, const int oradius)
        {
            Point inner;
            Point outer;

            inner.Init(xpos, ypos);
            outer.Init(oxpos, oypos);

            this->inner = inner;
            this->outer = outer;
            this->radius = radius;
            this->oradius = oradius;
        }
        void ShowRingInfo()
        {
            cout<<"Inner Circle Info..."<<endl;
            cout<<"radius: "<<radius<<endl;
            inner.ShowPointInfo();
            cout<<"Outer Circle Info..."<<endl;
            cout<<"radius: "<<oradius<<endl;
            outer.ShowPointInfo();
        }
};


int main(void)
{
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
}