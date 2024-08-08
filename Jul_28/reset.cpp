#include <iostream>
#include "my_lib.h"

void reset(int n, int i)
{
    std::cout << (n & (~(1 << i))) << std::endl;
}