#include "my_lib.h"

void convertor_to_0(int arr[][3], int size)
{
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (j % 2 == 0) {
				arr[i][j] = 0;
			}
		}
	}
}
