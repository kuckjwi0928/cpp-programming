#include<iostream>
int main(void)
{
    int inputs[5];
    for (int i = 0; i < 5; i++) {
        std::cout << i + 1 << "번째 정수 입력: ";
        std::cin >> inputs[i];
    }

    int result = 0;
    for (int i = 0; i < 5; i++) {
        result += inputs[i];
    }
    std::cout << "합계: " << result;
}
