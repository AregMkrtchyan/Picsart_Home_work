#include <iostream>
#include "my_lib.h"

int binary_search(int arr[], int target, int i, int j, int mid);

int sum_of_main_diagonal(int arr[][2], int size);

void convertor_to_0(int arr[][3], int size);

int sum_of_auxiliary_diagonal(int arr[][3], int size);

void convertor(int arr[][3], int size);

int sum(int arr[][3], int size);

int main()
{ 
	// 
	//const int size = 2;
	//int arr[size][size] = {0};
	/*
	int nums[size] = {9, 2};
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			std::cin >> arr[i][j];
		}
	}
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << sum_of_main_diagonal(arr, size);
	
	
	int N = 3;
	int M = 3;
	int max = arr[0][0];
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			max = (max <= arr[i][j]) ? arr[i][j] : max;
		}
	}
	std::cout << max << std::endl;
	*/
	
	const int size = 3;
	int arr[size][size] = {
							{1, 2, 3}, 
							{4, 0, 6}, 
							{7, 8, 9}
						  };
	std::cout << sum(arr, size) << std::endl;		
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
	//std::cout << sum_of_auxiliary_diagonal(arr, size) << std::endl;
	

	return 0;
}

int sum(int arr[][3], int size)
{
	int res = 0;
	for (int i = 0; i < size; ++i) 
	{	
		for (int j = i + 1; j < size; ++j) {
			res += arr[i][j];
		}
	}
	return res;
}

void convertor(int arr[][3], int size)
{
	for (int i = 0, j = size - 1; i < size; ++i, --j) {
		int tmp = arr[i][i];
		arr[i][i] = arr[i][j];
		arr[i][j] = tmp;
	}
}

int sum_of_auxiliary_diagonal(int arr[][3], int size) 
{
	int res = 0;
	for (int i = 0, j = size - 1; i < size; ++i, --j) {
			res += arr[i][j];
	}
	return res;
}

void convertor_to_0(int arr[3][3], int size) 
{
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (!(i % 2 == 0)) {
				arr[i][j] = 0;
			}
		}
	}
	return ;
}

int sum_of_main_diagonal(int arr[2][2], int size)
{
	int res = 0;
	for (int i = 0; i < size; ++i) {
		res += arr[i][i];
	}
	return res;
}

int binary_search(int arr[], int target, int i, int j, int mid)
{
	if (arr[mid] == target) {
		return mid;
	}
	return (arr[mid] < target) ? binary_search(arr, target, mid - 1, j, (i + j) / 2) : binary_search(arr, target, i, mid + 1, (i + j) / 2);
}
