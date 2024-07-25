#include "my_lib.h"

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
