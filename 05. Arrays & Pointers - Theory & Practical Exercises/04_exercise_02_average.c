#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int findSumArray(int*, int);
double findArrayAverage(int*, int);

int main(int argc, char const *argv[])
{
	int grades[SIZE] = {80, 85, 72, 90};	
	double average;

	average = findArrayAverage(grades, SIZE);

	printf("Average = %lf \n", average);

	return 0;
}

int findSumArray(int *arr, int size) {
	int i, sum = 0;
	for(i = 0; i < size; i++)
		sum = sum + arr[i];
	return sum;
}

double findArrayAverage(int *arr, int size) {
	int sumOfArray;
	sumOfArray = findSumArray(arr, size);
	return (double)sumOfArray; // size
}











