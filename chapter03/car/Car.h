#include <iostream>

using namespace std;

#ifndef __CAR_H__
#define __CAR_H__

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
        void InitMemebers(string ID, int fuel);
        void ShowCarState();
        void Accel();
        void Break();  
};

#endif
