#include <iostream>

using namespace std;

class Printer
{
    private:
        string s;
    public:
        void SetString(string s);
        void ShowString();
};

void Printer::SetString(string s)
{
    this->s = s;
}

void Printer::ShowString()
{
    cout<<s<<endl;
}

int main(void)
{
    Printer pnt;
    pnt.SetString("kuckjwi");
    pnt.ShowString();
    pnt.SetString("isis");
    pnt.ShowString();
}
