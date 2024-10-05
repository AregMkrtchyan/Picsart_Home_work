#include <iostream>
#include "my_lib.h"

void reverse(int num)
{
    if (num > 1) {
        reverse(num >> 1);
    }
    std::cout << (num & 1);
}