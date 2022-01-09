//
// Created by kuckjwi on 2022/01/09.
//

#include "Person.h"


Person::Person() {
    // nothing
}

Person::Person(char *myname, int myAge)
{
    int len = strlen(myname) + 1;
    name = new char[len];
    strcpy(name, myname);
    age = myAge;
}

void Person::SetPersonInfo(char *myname, int myage)
{
    name = myname;
    age = myage;
}

void Person::ShowPersonInfo() const
{
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
}

Person::~Person()
{
    delete []name;
    cout<<"called destructor!"<<endl;
}

int main()
{
    Person *parr[3];
    char namestr[100];
    int age;

    for (int i = 0; i < 3; i++)
    {
        cout<<"name:";
        cin>>namestr;
        cout<<"age:";
        cin>>age;
        parr[i] = new Person(namestr, age);
        parr[i]->ShowPersonInfo();
        delete parr[i];
    }
}
