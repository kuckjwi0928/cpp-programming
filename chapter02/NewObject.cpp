#include<iostream>
#include<stdlib.h>

using namespace std;


class Simple
{
    public:
        Simple()
        {
            cout<<"constructor!"<<endl;
        }
};

int main(void)
{
  Simple* sp1 = new Simple;  
  Simple* sp2 = (Simple*)malloc(sizeof(Simple)*1);

  delete sp1;
  free(sp2);
}
