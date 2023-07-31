#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

// A function to search if an element is in a given array
int findIfKeyInArray(int*, int, int);

int main(int argc, char const *argv[])
{
	int grades[SIZE] = {80, 85, 72, 90};
	int result;

	result = findIfKeyInArray(grades, SIZE, 80);
	// result - 0/1
	 
	printf("Result: %d \n", result);

	return 0;
}

int findIfKeyInArray(int *arr, int size, int key) {
	int i;

	for(i = 0; i < SIZE; i++) {
		if(arr[i] == key)
			return 1;
	}

	return 0;
}