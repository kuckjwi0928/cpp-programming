#include <iostream>
using namespace std;

class SoSimple
{
public:
    virtual void ShowSimpleInfo()
    {
        cout << "SoSimple Base Class" << endl;
    }
};

class SoComplex : public SoSimple
{
public:
    void ShowSimpleInfo()
    {
        cout << "SoComplex Derived Class" << endl;
    }
};

int main(void)
{
    SoSimple *simp1 = new SoComplex;
    SoComplex *comp1 = dynamic_cast<SoComplex*>(simp1);
    comp1->ShowSimpleInfo();
    return 0;
}
