#include "my_lib.h"
#include <iostream>

char *get_dynamic_string(int size) 
{
	char *str = new char(size);
	for (int i = 0; i < size; ++i) {
		std::cin >> str[i];
	}
	str[size] = '\0';
	return str;
}
