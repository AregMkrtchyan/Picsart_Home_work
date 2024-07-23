#include "my_lib.h"

int sum_of_main_diagonal(int arr[][3], int size)
{
	int res = 0;
	for (int i = 0; i < size; ++i) {
		res += arr[i][i];
	}
	return res;
}
