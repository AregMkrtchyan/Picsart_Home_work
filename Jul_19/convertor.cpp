#include "my_lib.h"

void convertor(int **arr, int size)
{
	for (int i = 0, j = size - 1; i < size; ++i, --j) {
		int tmp = arr[i][i];
		arr[i][i] = arr[i][j];
		arr[i][j] = tmp;
	}
}
