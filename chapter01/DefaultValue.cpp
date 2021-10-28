#include <iostream>

int Adder(int num1=1, int num2=2);

int main(void)
{
    std::cout<<Adder()<<std::endl;
    std::cout<<Adder(2,3)<<std::endl;
}

int Adder(int num1, int num2)
{
    return num1 + num2;
}
