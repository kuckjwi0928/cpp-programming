#include <iostream>
using namespace std;

int main(void)
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try
    {
        if (num2 == 0) {
            throw num2;
        }
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    } catch (int expn)
    {
        cout << "Exception: " << expn << endl;
    }
    cout << "End of the program" << endl;

    return 0;
}
