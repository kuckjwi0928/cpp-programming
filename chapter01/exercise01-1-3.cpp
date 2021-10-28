#include<iostream>
int main(void)
{
    int num;
    std::cout << "숫자를 입력하세요: ";
    std::cin >> num;
    
    for (int j = 1; j <= 9; j++) {
        std::cout << num << "x" << j << "=" << num * j << std::endl;
    }
}
