#include <stdio.h>

int add_arr(int* arr) {
	int result = 0;
	while (*arr) {
		result += *arr;
		arr++;
	}
	return result;
}
