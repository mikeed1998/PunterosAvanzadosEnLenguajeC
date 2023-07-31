#include <stdio.h>
#include <stdlib.h>

void staticMain(void);
int sumArrayStatic(int[], int);
void dynamicMain(void);
int sumArrayDynamic(int*, int);

int main(int argc, char const *argv[])
{
	staticMain();
	dynamicMain();

	return 0;
}

void staticMain(void) {
	int grades[3] = {3,5,7};
	int result;

	result = sumArrayStatic(grades, 3);

	printf("Sum = %d \n", result);
}

int sumArrayStatic(int arr[], int size) {
	int i, sum = 0;
	for(int i = 0; i < size; i++)
		sum = sum + arr[i];
	return sum;
}

void dynamicMain(void) {
	int grades[3] = {3,5,7};
	int result;

	result = sumArrayDynamic(grades, 3);

	printf("Sum = %d \n", result);
}

int sumArrayDynamic(int *ptr, int size) {
	int i, sum = 0;
	for(int i = 0; i < size; i++)
		sum = sum + ptr[i];
	return sum;
}