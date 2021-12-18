#include <iostream>
using namespace std;

class SinivelCap
{
    public:
        void Take() const { cout<<"콧물이 싹~ 납니다."<<endl; }
};

class SneezeCap
{
    public:
        void Take() const { cout<<"재채기가 맞습니다."<<endl; }
};

class SnuffleCap
{
    public:
        void Take() const { cout<<"코가 뻥 뚤립니다."<<endl; }
};

class ColdPatient
{
    public:
        void TakeSinvielCap(const SinivelCap &cap) const { cap.Take(); }
        void TakeSneezeCap(const SneezeCap &cap) const { cap.Take(); }
        void TakeSnuffleCap(const SnuffleCap &cap) const { cap.Take(); }
};

int main(void)
{
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient sufferer;
    sufferer.TakeSinvielCap(scap);
    sufferer.TakeSneezeCap(zcap);
    sufferer.TakeSnuffleCap(ncap);
}
