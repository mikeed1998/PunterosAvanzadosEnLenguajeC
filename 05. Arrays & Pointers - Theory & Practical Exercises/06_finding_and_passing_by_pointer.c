#include <stdio.h>
#include <stdlib.h>

void minMax(int*, int, int*, int*);

int main(int argc, char const *argv[])
{
	int myGrades[] = {80, 90, 100};
	int min, max;

	minMax(myGrades, 3, &min, &max);

	printf("The maximum value in your grades: %d \n", max);
	printf("The minimum value in your grades: %d \n", min);
	return 0;
}

void minMax(int *pArr, int size, int *minValue, int *maxValue) {
	int i;
	*minValue = pArr[0];
	*maxValue = pArr[0];

	for(i = 1; i < size; i++) {
		if(pArr[i] < *minValue)
			*minValue = pArr[i];
		if(pArr[i] > *maxValue)
			*maxValue = pArr[i];
	}
}