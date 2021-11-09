#include<iostream>
using namespace std;

void swap(int &num, int &num2);

int main(void)
{
    int num = 10;
    int num2 = 20;
    swap(num, num2);
    cout<<num<<endl;
    cout<<num2<<endl;
}

void swap(int &num, int &num2)
{
    num = num + 1;
    num2 = -num2;
}
