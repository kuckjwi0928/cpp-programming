#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    int len;
    char *str;
public:
    String();

    String(const char *s);

    String(const String &ref);

    ~String();

    String &operator=(const String &ref);

    String &operator+=(const String &ref);

    bool operator==(const String &ref);

    String operator+(const String &ref) const;

    friend ostream &operator<<(ostream &os, const String &ref);

    friend istream &operator>>(istream &is, String &ref);
};

String::String()
{
    len = 0;
    str = NULL;
}

String::String(const char *s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
}

String::String(const String &ref)
{
    len = ref.len;
    str = new char[len + 1];
    strcpy(str, ref.str);
}

String::~String()
{
    delete[] str;
}

String &String::operator=(const String &ref)
{
    delete[] str;
    len = ref.len;
    str = new char[len + 1];
    strcpy(str, ref.str);
    return *this;
}

String &String::operator+=(const String &ref)
{
    char *temp = new char[len + ref.len + 1];
    strcpy(temp, str);
    strcat(temp, ref.str);
    delete[] str;
    len += ref.len;
    str = temp;
    return *this;
}

bool String::operator==(const String &ref)
{
    return !strcmp(str, ref.str);
}

String String::operator+(const String &ref) const
{
    String temp;
    temp.len = len + ref.len;
    temp.str = new char[temp.len + 1];
    strcpy(temp.str, str);
    strcat(temp.str, ref.str);
    return temp;
}

ostream &operator<<(ostream &os, const String &ref)
{
    os << ref.str;
    return os;
}

istream &operator>>(istream &is, String &ref)
{
    char buf[100];
    is >> buf;
    ref = String(buf);
    return is;
}

int main(void)
{
    String str1 = "I love ";
    String str2 = "you";
    String str3 = str1 + str2;
    cout << str3 << endl;
    str1 += str2;
    cout << str1 << endl;
    if (str1 == str3)
        cout << "Same String" << endl;
    else
        cout << "Different String" << endl;
    return 0;
}
