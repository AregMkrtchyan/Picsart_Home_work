#include "my_lib.h"
#include <iostream>

void printArr(int arr[], int size)
{
	if (size == 0) {
		std::cout << arr[size] << std::endl;
		return ;
	}
	std::cout << *arr << std::endl;
	printArr(arr + 1, size - 1);
}
