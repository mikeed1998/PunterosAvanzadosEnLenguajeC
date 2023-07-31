#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

// A function to search if an element is in a given array
int finMaxInArray(int*, int);

int main(int argc, char const *argv[])
{
	int grades[SIZE] = {80, 85, 72, 90};
	int result;

	result = finMaxInArray(grades, SIZE);

	printf("Max = %d \n", result);

	return 0;
}

int finMaxInArray(int *arr, int size) {
	int maxSoFar;
	int i;

	if(size <= 0)
		return -1;

	maxSoFar = arr[0];
	for(i = 1; i < size; i++) {
		if(arr[i] > maxSoFar)
			maxSoFar = arr[i];
	}

	return maxSoFar;
}




