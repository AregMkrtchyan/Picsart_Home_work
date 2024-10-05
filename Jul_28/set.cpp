#include "my_lib.h"
#include <iostream>

void set(int num, int i)
{
    std::cout << (num | (1 << i)) << std::endl;
}