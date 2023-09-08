#include <stdio.h>
#include <stdlib.h>

int add_arr(int* arr) {
	int result = 0;
	while (*arr) {
		result += *arr;
		arr++;
	}
	return result;
}

int mult_arr(int* arr) {
	int result = 1;
	while (*arr) {
		result *= *arr;
		arr++;
	}
	return result;
}

int* rev_arr(int* arr, int size) {
	int *result = malloc(size*sizeof(int));
	for (int i = 0; i < size; i++) {
		result[i] = arr[size-i-1];
	}
	return result;
}

int main() {
	int arr[5];
	printf("Please enter 5 numbers\n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", (arr+i));
	}

	printf("The addition of your numbers is: %d\n", add_arr(arr));
	printf("The multiplication of your numbers is: %d\n", mult_arr(arr));
}
