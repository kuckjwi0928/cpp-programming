#include<iostream>

int main(void)
{
    char name[100];
    char lang[100];

    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "What is your favor programming language? ";
    std::cin >> lang;

    std::cout << "My name is " << name << std::endl;
    std::cout << "My favor language is " << lang << std::endl;
}
