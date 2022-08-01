//
// Created by kuckjwi on 2022/07/22.
//

#include <iostream>

using namespace std;

class SoSimple
{
private:
    int num1;
    int num2;
public:
    SoSimple(int n1, int n2) : num1(n1), num2(n2)
    {}

    explicit SoSimple(SoSimple &copy) : num1(copy.num1), num2(copy.num2)
    {
        cout << "Called SoSimple (SoSimple &copy)" << endl;
    }

    void ShowSimpleData()
    {
        cout << num1 << endl;
        cout << num2 << endl;
    }
};

int main(void)
{
    SoSimple sim1(15, 30);
    SoSimple sim2(sim1);

    sim2.ShowSimpleData();
}
