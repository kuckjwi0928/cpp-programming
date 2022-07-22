//
// Created by kuckjwi on 2022/07/22.
//

#include "UsefulThisPtr.h"

using namespace std;

TwoNumber::TwoNumber(int num1, int num2)
{
    this->num1 = num1;
    this->num2 = num2;
}

void TwoNumber::ShowTewNumber()
{
    cout << this->num1 << endl;
    cout << this->num2 << endl;
}

int main(void)
{
    TwoNumber two(2, 4);
    two.ShowTewNumber();
}
