#include "my_lib.h"

int count_ones(int num)
{
    int count = 0;
    for (int i = 0; i < sizeof(int) * 8; ++i) {
        if (num & (1 << i)) {
            ++count;
        }
    }
    return count;
}