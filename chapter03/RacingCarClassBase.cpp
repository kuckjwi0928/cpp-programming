#include "Car.h"
#include <iostream>

using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2, ACC_STEP = 10, BRK_STEP = 10
    };
}

class Car
{
    private:
        string gamerID;
        int fuelGauge;
        int curSpeed;
    public:
        void InintMemebers(string ID, int fuel);
        void ShowCarState();
        void Accel();
        void Break();  
};

void Car::InintMemebers(string ID, int fuel)
{
    gamerID = ID;
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState()
{
    cout<<"소유자 ID: "<<gamerID<<endl;
    cout<<"연료량: "<<fuelGauge<<endl;
    cout<<"현재속도: "<<curSpeed<<"km"<<endl;
}

void Car::Accel()
{
    if (fuelGauge < 1)
        return;
    else 
        fuelGauge -= CAR_CONST::FUEL_STEP;

    if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
    {
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }
    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
    if (curSpeed < CAR_CONST::BRK_STEP)
    {
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void)
{
    Car run99;
    run99.InintMemebers("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
}
