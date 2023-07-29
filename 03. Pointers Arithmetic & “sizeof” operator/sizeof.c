#include <stdio.h>
#include <stdlib.h>

void punteros(void);

int main(int argc, char const *argv[])
{
	int num;
	printf("size of int = %d \n", sizeof(num));

	double grade = 99.8;
	printf("size of double = %d \n", sizeof(grade));

	int grade1 = 80, grade2 = 90;
	printf("size of variable = %d\n", sizeof(grade1 + grade2));
	printf("size of variable = %d\n", sizeof(grade1) + sizeof(grade2));

	printf("size of %d \n", sizeof(double));	
	printf("size of %d \n", sizeof(char));	
	printf("size of %d \n", sizeof(int));	
	printf("size of %d \n", sizeof(float));	
	printf("size of %d \n", sizeof('a'));
	printf("size of %d \n", sizeof("a"));		

	int arrayI[3];

	printf("Array size: %d \n", sizeof(arrayI));

	double arrayD[5];

	printf("Array size: %d \n", sizeof(arrayD));	

	punteros();

	return 0;
}

void punteros(void) {
	double arrayDouble[5] = {1.3, 3.5, 2.4, 9.9, 7.2};
	printf("Array size: %d \n", sizeof(arrayDouble));

	int *ptr1;
	int grade1 = 80;
	ptr1 = &grade1;
	printf("%d \n", sizeof(ptr1));

	double *ptr2;
	double grade2 = 75.5;
	ptr2 = &grade2;
	printf("%d \n", sizeof(ptr2));

	int arr[6];
	printf("Address: %p \n", arr);
	printf("Array Size: %d \n", sizeof(arr));

	int *aPtr = arr;
	printf("Address: %p \n", aPtr);
	printf("Array Size: %d \n", sizeof(aPtr));
}


















