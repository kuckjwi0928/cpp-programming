//
// Created by kuckjwi on 2022/01/15.
//

#include "PointerThis.h"

SoSimple::SoSimple(int n) : num(n) {
    cout<<"num="<<num<<", ";
    cout<<"address="<<this<<endl;
}

void SoSimple::ShowSimpleData()
{
    cout<<num<<endl;
}

SoSimple *SoSimple::GetThisPointer()
{
    return this;
}

int main(void)
{
    SoSimple sim1(100);
    SoSimple* ptr1 = sim1.GetThisPointer();
    cout<<ptr1<<", ";
}
