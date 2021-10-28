#include<iostream>
int main(void)
{
    char name[100];
    char phone[100];

    std::cout << "이름을 입력해 주세요: ";
    std::cin >> name;
    std::cout << "전화번호를 입력해 주세요: ";
    std::cin >> phone;

    std::cout << name << std::endl;
    std::cout << phone << std::endl;
}
