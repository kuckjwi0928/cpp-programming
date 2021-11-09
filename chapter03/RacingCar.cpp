#include<iostream>

using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
    char gamerId[ID_LEN];
    int fuelGauge;
    int curSpped;

    void ShowCarState()
    {
        cout<<"소유자 ID: "<<gamerId<<endl;
        cout<<"연료량: "<<fuelGauge<<endl;
        cout<<"현재속도: "<<curSpped<<"km"<<endl;
    }

    void Accel()
    {
        if (fuelGauge <= 0) return;
        
        fuelGauge -= FUEL_STEP;

        if (curSpped + ACC_STEP >= MAX_SPD)
        {
            curSpped = MAX_SPD;
            return;
        }

        curSpped += ACC_STEP;
    }

    void Break() 
    {
        if (curSpped < BRK_STEP)
        {
            curSpped = 0;
            return;
        }
        curSpped -= BRK_STEP;
}
};

int main(void)
{
    Car run99 = {"run99", 100, 0};
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
}
