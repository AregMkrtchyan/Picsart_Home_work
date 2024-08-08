#include <iostream>
#include "my_lib.h"

void reset(int num, int i)
{
    std::cout << (num & (~(1 << i))) << std::endl;
}