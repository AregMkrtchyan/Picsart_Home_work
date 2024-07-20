#include "my_lib.h"

int minArray(int arr[], int size) 
{
	if (size == 0) {
		return arr[size];
	}
	return (arr[size] <= minArray(arr, size - 1)) ? arr[size] : minArray(arr, size - 1);
}
