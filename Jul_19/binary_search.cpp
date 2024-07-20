#include "my_lib.h"

int binary_search(int arr[], int i, int j, int mid, int target) 
{
	if (arr[mid] == target) {
		return mid;
	}
	return (arr[mid] > target) ? binary_search(arr, mid + 1, j, (i + j) / 2, target) : binary_search(arr, i, mid - 1, (i + j) / 2, target);
}
