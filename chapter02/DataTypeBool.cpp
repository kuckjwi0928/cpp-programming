#include <iostream>
using namespace std;

bool IsPositive(int num)
{
    if (num <= 0)
        return false;
    return true;
}

int main(void)
{
    bool isPos;
    int num;
    cout<<"Input Number: ";
    cin>>num;

    isPos = IsPositive(num);

    cout<<isPos;
}
