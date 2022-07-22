//
// Created by kuckjwi on 2022/07/22.
//

#include "SelfRef.h"

SelfRef::SelfRef(int n) : num(n)
{}

SelfRef &SelfRef::Adder(int n)
{
    num += n;
    return *this;
}

SelfRef &SelfRef::ShowTwoNumber()
{
    cout << num << endl;
    return *this;
}

int main(void)
{
    SelfRef obj(3);
    SelfRef &ref = obj.Adder(2);

    obj.ShowTwoNumber();
    ref.ShowTwoNumber();

    ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
}
