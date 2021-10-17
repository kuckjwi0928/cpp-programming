#include<iostream>

int main(void)
{
    int val1, val2;
    int result = 0;
    std::cout << "두 개의 숫자 입력: ";
    std::cin >> val1 >> val2;

    int start = val1, end = val2;

    if (val1 > val2) {
        start = val2;
        end = val1;
    }    

    for (int i = val1 + 1; i < val2; i++) {
        result += i;
    }

    std::cout << "두 수 사이의 정수 합: " << result << std::endl;
}
