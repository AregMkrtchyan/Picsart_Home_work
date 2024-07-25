#include "my_lib.h"

int sum_dynamic_array(int *arr, int size)
{
	int res = 0;
	for (int i = 0; i < size; ++i) {
		res += arr[i];
	}
	return res;
}
