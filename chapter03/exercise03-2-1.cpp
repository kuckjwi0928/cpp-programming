#include <iostream>

using namespace std;

class Calculator
{   
    private:
        int opCnt;
    public:
        void Init();
        void ShowOpCount();
        double Add(double a, double b);
        double Sub(double a, double b);
        double Div(double a, double b);
        double Mul(double a, double b);
};

void Calculator::Init()
{
    opCnt = 0;
}

double Calculator::Add(double a, double b)
{
    opCnt++;
    return a + b;
}

double Calculator::Sub(double a, double b)
{
    opCnt++;
    return a - b;
}

double Calculator::Div(double a, double b)
{
    opCnt++;
    return a / b;
}

double Calculator::Mul(double a, double b)
{
    opCnt++;
    return a * b;
}

void Calculator::ShowOpCount()
{
    cout<<opCnt;
}

int main(void)
{
    Calculator cal;
    cal.Init();

    cout<<cal.Add(3.2, 2.4)<<endl;
    cout<<cal.Div(3.5, 1.7)<<endl;
    cout<<cal.Sub(2.2, 1.5)<<endl;
    cout<<cal.Mul(4.9, 1.2)<<endl;
    cal.ShowOpCount();
}