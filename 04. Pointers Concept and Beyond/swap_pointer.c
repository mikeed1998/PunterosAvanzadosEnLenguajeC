#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

int main(int argc, char const *argv[])
{
	int num1 = 7, num2 = 5;

	printf("Enter num1: ");
	printf("%d \n", &num1);
	printf("Enter num2: ");
	printf("%d \n", &num2);

	// num1 = 7, num2 = 5;

	printf("BEFORE SWAP: num1 = %d, num2 = %d \n", num1, num2);
	swap(&num1, &num2);
	printf("AFTER SWAP: num1 = %d, num2 = %d \n", num1, num2);

	return 0;
}

void swap(int *ptr1, int *ptr2) {
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}