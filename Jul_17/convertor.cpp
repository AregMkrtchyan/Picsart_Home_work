#include "my_lib.h"
#include <iostream>

void convertor(int num)
{
	if (num == 0 || num == 1) {
		std::cout << num << std::endl;
		return ;
	}
	convertor(num / 2);
	std::cout << num % 2 << std::endl;
}
