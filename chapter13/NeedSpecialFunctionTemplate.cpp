#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b)
{
    return a > b ? a : b;
}

int main(void)
{
    cout << Max(3, 4) << endl;
    cout << Max(3.3, 4.4) << endl;
    cout << Max("Simple", "Best") << endl;
    return 0;
}
