#include "my_lib.h"

int *get_primes_array(int n)
{
	int *arr = new int(n);
	for (int i = 0, j = 2; i < n; ++j) {
		if (is_prime(j)) {
			arr[i] = j;
			++i;
		}
	}
	return arr;
}
