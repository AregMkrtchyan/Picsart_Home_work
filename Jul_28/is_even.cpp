#include "my_lib.h"

int is_even(int num)
{
    return (num & 1) ? 0 : 1;
}