#include<cstdio>
#include"myrand.h"//namespace mrd
#include"myoperate.h"//namespace opr

int init(void)
{
    mrd::randomize();
}

int main(void)
{
    init();
    return 0;
}
