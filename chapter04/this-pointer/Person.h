//
// Created by kuckjwi on 2022/01/09.
//

#include <iostream>
#include <cstring>
using namespace std;

#ifndef CPP_PROGRAMING_OBJARR_H
#define CPP_PROGRAMING_OBJARR_H


class Person {
private:
    char* name;
    int age;
public:
    Person();
    Person(char* myname, int myage);
    ~Person();
    void SetPersonInfo(char *myname, int myage);
    void ShowPersonInfo() const;
};


#endif //CPP_PROGRAMING_OBJARR_H
