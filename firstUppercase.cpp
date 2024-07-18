#include "my_lib.h"

char firstUppercase(char *str)
{
	if (!(*str)) {
		return 0;
	}
	if (*str >= 'A' && *str <= 'Z') {
		return *str;
	}
	return firstUppercase(str + 1);
}
