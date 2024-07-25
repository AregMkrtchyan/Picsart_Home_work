#include "my_lib.h"
#include <iostream>

int *get_dynamic_array(int n)
{
	int *arr = new int(n);
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	return arr;
}
