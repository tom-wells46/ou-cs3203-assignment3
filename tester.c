#include <stdio.h>
#include "assignment.c"

int add_arr_test(int* arr, int expected) {
	int result = add_arr(arr);
	if (result == expected) {
		return 1;
	}
	return 0;
}

int main() {
	int test1[] = {1, 2, 3, 4, 5, 6};
	int test2[] = {1, -2, 3, -4, 5};

	printf("add_arr_test1: %b\n", add_arr_test(test1, 21));
	printf("add_arr_test2: %b\n", add_arr_test(test2, 3));
	return 0;
}
