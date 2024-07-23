#include "my_lib.h"

int sum(int arr[][3], int size)
{
	int res = 0;
	for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j < size; ++j) {
			res += arr[i][j];
		}
	}
	return res;
}
