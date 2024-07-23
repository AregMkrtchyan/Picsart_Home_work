#include "my_lib.h"

int find_max(int **arr, int row, int column)
{
	int max = arr[0][0];
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			max = (arr[i][j] >= max) ? arr[i][j] : max;
		}
	}
	return max;
}
