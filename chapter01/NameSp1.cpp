#include <iostream>

namespace BestComImpl
{
    void SimpleFunc(void);
}

namespace ProgComImpl
{
    void SimpleFunc(void);
    void TestFunc(void);
}

int main(void)
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc(void)
{
    std::cout<<"BestCom::SimpleFunc"<<std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
    TestFunc(); // same name space
    std::cout<<"ProgComImpl::SimpleFunc"<<std::endl;
}

void ProgComImpl::TestFunc(void) {
    std::cout<<"ProgComImpl::TestFunc"<<std::endl;
}
