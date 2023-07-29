#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	double grades[3] = {80.5, 90.3, 99.9};

	printf("grades start at: %p \n", grades);
	printf("grades start at: %p \n", grades + 1);
	printf("grades start at: %p \n", grades - 3);

	return 0;
}