//
// Created by kuckjwi on 2022/01/09.
//
#include <iostream>

using namespace std;

#ifndef CPP_PROGRAMING_NAMECARD_H
#define CPP_PROGRAMING_NAMECARD_H

enum class COMP_POS
{
    CLERK, SENIOR, ASSIST, MANAGER
};

class NameCard {
private:
    string name;
    string companyName;
    string phone;
    COMP_POS position;
public:
    NameCard(string name, string companyName, string phone, COMP_POS position);
    void ShowNameCardInfo() const;
};

#endif //CPP_PROGRAMING_NAMECARD_H
