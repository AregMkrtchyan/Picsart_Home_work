#include "my_lib.h"
#include <iostream>

void printArr2(int arr[], int size)
{
	if (size == 0) {
		std::cout << arr[size] << std::endl;
		return ;
	}
	std::cout << arr[size] << std::endl;
	printArr2(arr, size - 1);
}
