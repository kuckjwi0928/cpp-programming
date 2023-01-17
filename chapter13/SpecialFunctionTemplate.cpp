#include <iostream>
#include <cstring>

using namespace std;

template<typename T>
T Max(T a, T b)
{
    return a > b ? a : b;
}

template<>
char *Max(char *a, char *b)
{
    return strlen(a) > strlen(b) ? a : b;
}

template <>
const char* Max(const char* a, const char* b)
{
    return strlen(a) > strlen(b) ? a : b;
}

int main(void)
{
    cout << Max(11, 15) << endl;
    cout << Max("simple", "Best") << endl;
    char str1[] = "simple";
    char str2[] = "Best";
    cout << Max(str1, str2) << endl;
    return 0;
}
