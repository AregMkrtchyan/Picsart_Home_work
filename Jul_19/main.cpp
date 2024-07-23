#include "my_lib.h"
#include <iostream>

int main()
{
	const int size = 3;
	int arr[size][size] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	std::cout << sum_of_main_diagonal(arr, size) << std::endl;

	return 0;
}
