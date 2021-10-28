#include <iostream>

int BoxVolume(int length);
int BoxVolume(int length, int width);
int BoxVolume(int length, int width, int height);

int main(void) {
    std::cout<<"[5, 5, D]"<<BoxVolume(5, 5)<<std::endl;
}

int BoxVolume(int length)
{
    return BoxVolume(length, 1);
}

int BoxVolume(int length, int width)
{
    return BoxVolume(length, width, 1);
}

int BoxVolume(int length, int width, int height)
{
    return length * width * height;
}
