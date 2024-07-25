#include "my_lib.h"
#include <iostream>

int *resize_dynamic_array(int *old_array, int old_size, int new_size)
{
	int *new_arr = new int(new_size);
	if (old_size < new_size) {
		for (int i = 0; i < old_size; ++i) {
			new_arr[i] = old_array[i];
		}

		for (int i = old_size; i < new_size; ++i) {
			std::cin >> new_arr[i];
		}
	} else {
		for (int i = 0; i < new_size; ++i) {
			new_arr[i] = old_array[i];
		}
	}

	return new_arr;
}
