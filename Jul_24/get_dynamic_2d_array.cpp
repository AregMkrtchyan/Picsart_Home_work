#include "my_lib.h"
#include <iostream>

int **get_dynamic_2d_array(int rows, int cols)
{
	int **arr = new int*[rows];

	for (int i = 0; i < rows; ++i) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			std::cin >> arr[i][j];
		}
	}
	return arr;
}
