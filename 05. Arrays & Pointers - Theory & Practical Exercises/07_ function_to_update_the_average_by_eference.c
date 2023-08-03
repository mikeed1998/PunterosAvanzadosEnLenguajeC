#include <stdio.h>
#include <stdlib.h>

// Write a function called "updateAverage"
// The function should receive 2 values and update by "reference" the average (of the caller)
// The function SHOULD NOT print/return anything.

void updateAverage(int, int, float*);

int main(int argc, char const *argv[])
{
	int a, b;
	float average;

	printf("Enter the value for varible 'a:' ");
	scanf("%d", &a);
	printf("Enter the value for variable: 'b': ");
	scanf("%d", &b);	

	updateAverage(a, b, &average);

	printf("Average = %f", average);

	return 0;
}

void updateAverage(int num1, int num2, float *avg) {
	*avg = (num1 + num2) / 2.0;
}