#include <iostream>

using namespace std;

class SoBase
{
private:
    int baseNum;
public:
    SoBase() : baseNum(20)
    {
        cout << "SoBase()" << endl;
    }

    SoBase(int n) : baseNum(n)
    {
        cout << "SoBase(int n)" << endl;
    }

    void ShowBaseDate()
    {
        cout << baseNum << endl;
    }
};

class SoDerived : public SoBase
{
private:
    int deriveNum;
public:
    SoDerived() : deriveNum(30)
    {
        cout << "SoDerived()" << endl;
    }
    SoDerived(int n) : deriveNum(n)
    {
        cout << "SoDerived(int n)" << endl;
    }
    SoDerived(int n1, int n2) : SoBase(n1), deriveNum(n2)
    {
        cout << "SoDerived(int n1, int n2)" << endl;
    }
    void ShowDeriveData()
    {
        ShowBaseDate();
        cout << deriveNum << endl;
    }
};

int main(void)
{
    cout << "case1....." << endl;
    SoDerived dr1;
    dr1.ShowDeriveData();
    cout << "----" << endl;
    SoDerived dr2;
    dr2.ShowDeriveData();
}
