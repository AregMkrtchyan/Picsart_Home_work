#include "my_lib.h"

int binary_search(int arr[], int i, int j, int target) 
{
	int mid = i + (j - i)/ 2;
	if (arr[mid] == target) {
		return mid;
	}
	return (arr[mid] > target) ? binary_search(arr, mid + 1, j, target) : binary_search(arr, i, mid - 1, target);
}
