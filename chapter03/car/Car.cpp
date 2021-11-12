#include "Car.h"

using namespace std;

void Car::InitMemebers(string ID, int fuel)
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