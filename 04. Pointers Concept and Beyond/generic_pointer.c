#include <stdio.h>
#include <stdlib.h>


// int *ptr;  		--->  pointer to int
// double *dPtr;	--->  pointer to double
// 
// UNIVERSAL VOID POINTER -> void*
// 


int main(int argc, char const *argv[])
{
	void *ptr;
	int a = 10;

	ptr = &a;

	printf("%d \n\n", *(int*)ptr);
	 
	printf("%d \n", *(int*)ptr);
	printf("%d \n", sizeof(*(int*)ptr));
	printf("%lf \n", *(double*)ptr);
	printf("%d \n", sizeof(*(double*)ptr));

	return 0;
}