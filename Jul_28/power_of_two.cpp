#include "my_lib.h"

int power_of_two(int num)
{
    int count = 0;
    for (int i = 0; i < sizeof(int) * 8; ++i) {
        if (num & (1 << i)) {
            ++count;
        }
        if (count >= 2) {
            return 0;
        }
    }
    return 1;
}