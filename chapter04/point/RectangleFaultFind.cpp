#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main(void)
{
    Point pos1;
    if (!pos1.InitMembers(-2, 4))
        cout<<"Faild!"<<endl;
    if (!pos1.InitMembers(2, 4))
        cout<<"Faild!"<<endl;
    
    Point pos2;
    if (!pos2.InitMembers(5, 9))
        cout<<"Faild!"<<endl;
    
    Rectangle rec;
    if (!rec.InitMembers(pos2, pos1))
        cout<<"Faild!!"<<endl;
    if (!rec.InitMembers(pos1, pos2))
        cout<<"Faild!!"<<endl;
    rec.ShowRecInto();
}
