#include "my_lib.h"

int count_odd(int num)
{
    int count = 0;
    for (int i = 0; i < sizeof(int) * 8; ++i) {
        if (num & (1 << i)) {
            ++count;
        }
    }
    return (count & 1) ? 1 : 0;
}