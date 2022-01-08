#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person(string myname, int myage)
    {
        name = myname;
        age = myage;
    }
    void ShowPersonInfo() const
    {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
    }
    ~Person()
    {
        cout<<"called destructor!"<<endl;
    }
};

int main()
{
    Person man("kuckjwi", 31);
    man.ShowPersonInfo();

    Person woman("isis", 30);
    woman.ShowPersonInfo();
}
