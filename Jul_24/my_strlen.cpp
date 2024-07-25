#include "my_lib.h"

int my_strlen(char *str) 
{
	int len = 0;
	while(*str++) {
		++len;
	}
	return len;
}
