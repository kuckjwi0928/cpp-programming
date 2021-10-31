#include <iostream>

namespace Hybrid
{
    void HybFunc(void)
    {
        std::cout<<"So Simple Function"<<std::endl;
    }
}

int main(void)
{
    using Hybrid::HybFunc;
    HybFunc();
}
