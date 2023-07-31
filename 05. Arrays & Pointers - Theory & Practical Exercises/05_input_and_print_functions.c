#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

void inputArray(int*, int);
void displayArray(int*, int);

int main(int argc, char const *argv[])
{
	int grades[SIZE];

	inputArray(grades, SIZE);
	displayArray(grades, SIZE);

	return 0;
}

void inputArray(int *arr, int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("Enter the value #%d: ", i + 1);
		scanf("%d", &arr[i]);
	}
}

void displayArray(int *arr, int size) {
	int i;
	for(i = 0; i < size; i++) {
		printf("Value #%d: %d \n", i + 1, arr[i]);
	}
}