#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int grade1 = 80, grade2 = 100;

	printf("Grades1 VALUE = %d\n", grade1);
	printf("Grades1 ADDRESS = %p\n", &grade1);

	printf("Grades2 VALUE = %d\n", grade2);
	printf("Grades2 ADDRESS = %pn", grade2);

	return 0;
}