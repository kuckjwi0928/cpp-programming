//
// Created by kuckjwi on 2022/07/22.
//

#ifndef CPP_PROGRAMING_SELFREF_H
#define CPP_PROGRAMING_SELFREF_H

#include <iostream>

using namespace std;

class SelfRef
{
private:
    int num;
public:
    SelfRef(int n);

    SelfRef &Adder(int n);

    SelfRef &ShowTwoNumber();
};


#endif //CPP_PROGRAMING_SELFREF_H
