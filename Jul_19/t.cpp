#include <iostream>

int main()
{
    const int b = 4;
    int a = 5;
    int* const ptr = &a;
    ptr = &b;
    return 0;
}