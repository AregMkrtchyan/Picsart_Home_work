#include "my_lib.h"
#include <iostream>

int main()
{
	int n = 0;
	std::cout << "Enter any number for n: ";
	std::cin >> n;
	int *arr = get_primes_array(n);

	for (int i = 0; i < n; ++i) {
		std::cout << arr[i] << std::endl;
	}

	delete[] arr;
	return 0;
}
