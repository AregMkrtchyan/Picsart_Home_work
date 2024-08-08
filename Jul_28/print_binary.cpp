#include <iostream>
#include "my_lib.h"

void print_binary(int num)
{
    if (num > 1) {
        print_binary(num >> 1);
    }
    std::cout << (num & 1);
}