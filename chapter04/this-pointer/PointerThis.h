//
// Created by kuckjwi on 2022/01/15.
//
#include <iostream>
#include <cstring>

using namespace std;

#ifndef CPP_PROGRAMING_POINTERTHIS_H
#define CPP_PROGRAMING_POINTERTHIS_H


class SoSimple
{
private:
    int num;
public:
    SoSimple(int n);
    void ShowSimpleData();
    SoSimple* GetThisPointer();
};


#endif //CPP_PROGRAMING_POINTERTHIS_H
