#include <iostream>

int * get_dynamic_array(int n);

int *resize_dynamic_array(int *old_arr, int old_size, int new_size);

int **get_dynamic_2d_array(int rows, int cols);

char *get_dynamic_string(int size);

char *concat_dynamic_strings(char *str1, char *str2);

int sum_dynamic_array(int *arr, int size);

int *get_primes_array(int n);

int my_strlen(char *str);

int is_prime(int num);

int main()
{
	int size = 5;
	std::cin >> size;
	int *arr = get_primes_array(size);
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}

int is_prime(int num)
{
	if (num < 2) {
		return 0;
	}
	
	for (int i = 2; i < num; ++i) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int *get_primes_array(int n) 
{
	int *arr = new int(n);
	for (int i = 0, j = 1; i < n; ++j) {
		if (is_prime(j)) {
			arr[i] = j;
			++i;
		}
	}
	return arr;
}

int sum_dynamic_array(int *arr, int size)
{
	int res = 0;
	for (int i = 0; i < size; ++i) {
		res += arr[i];
	}
	return res;
}

char *concat_dynamic_strings(char *str1, char *str2)
{
	int len1 = my_strlen(str1);
	int len2 = my_strlen(str2);
	int size = len1 + len2;
	char *str = new char(size);
	for (int i = 0; i < len1; ++i) {
		str[i] = str1[i];
	}

	for (int i = 0; i < len2; ++i) {
		str[len1] = str2[i];
		++len1;
	}
	str[size] = '\0';
	return str;
}

char *get_dynamic_string(int size)
{
	char *str = new char(size);
	for (int i = 0; i < size; ++i) {
		std::cin >> str[i];
	}
	str[size - 1] = '\0';
	return str;
}

int **get_dynamic_2d_array(int rows, int cols)
{
	int **arr = new int*[rows];

	for (int i = 0; i < rows; ++i) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			std::cin >> arr[i][j];
		}
	}
	return arr;
}

int *resize_dynamic_array(int *old_arr, int old_size, int new_size)
{
	int *new_arr = new int[new_size];
	for (int i = 0; i < old_size; ++i) {
		new_arr[i] = old_arr[i];
	}

	for (int i = old_size - 1; i < new_size; ++i) {
		std::cin >> new_arr[i];
	}
	return new_arr;
}

int * get_dynamic_array(int n)
{
	int *arr = new int[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}
	return arr;
}

int my_strlen(char *str)
{
	int len = 0;
	while(*str++) {
		++len;
	}
	return len;
}
