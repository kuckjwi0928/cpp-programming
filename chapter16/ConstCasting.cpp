#include <iostream>

using namespace std;

void ShowString(char* str)
{
    cout << str << endl;
}

void ShowAddResult(int &n1, int &n2)
{
    cout << n1 + n2 << endl;
}

int main(void)
{
    const char *name = "Kuckjwi";
    ShowString(const_cast<char *>(name));

    const int& num1 = 20;
    const int& num2 = 30;
    ShowAddResult(const_cast<int &>(num1), const_cast<int &>(num2));
}