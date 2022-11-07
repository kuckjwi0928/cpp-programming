#include <iostream>

using namespace std;

class Number
{
private:
    int num;
public:
    Number(int n = 0) : num(n)
    {
        cout << "Number(int n = 0)" << endl;
    }

    void ShowNumber() const
    {
        cout << num << endl;
    }

    Number &operator=(const Number &ref)
    {
        cout << "operator=()" << endl;
        num = ref.num;
        return *this;
    }
};

int main(void)
{
    Number num;
    num = 30;
    num.ShowNumber();
    return 0;
}
