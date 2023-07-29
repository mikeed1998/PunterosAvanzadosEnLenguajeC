#include <stdio.h>
#include <stdlib.h>

void artimeticaInt(void);
void artimeticaChar(void);
void artimeticaFloat(void);
void artimeticaDouble(void);

int main(int argc, char const *argv[])
{
	// printf("\tInt: ");
	// artimeticaInt();
	// printf("\n");

	// printf("\nChar: ");
	// artimeticaChar();	
	// printf("\n");

	// printf("\nFloat: ");
	// artimeticaFloat();	
	// printf("\n");

	printf("\nDouble: ");
	artimeticaDouble();	
	printf("\n");

	return 0;
}

void artimeticaInt(void) {
	int *ptrI;

	printf("%p\n", ptrI);

	ptrI = ptrI + 1;
	printf("%p\n", ptrI);

	ptrI = ptrI + 2;
	printf("%p\n", ptrI);
}

void artimeticaChar(void) {
	char *ptrC;

	printf("%p\n", ptrC);

	ptrC = ptrC + 1;
	printf("%p\n", ptrC);

	ptrC = ptrC + 2;
	printf("%p\n", ptrC);
}

void artimeticaFloat(void) {
	float *ptrF;

	printf("%p\n", ptrF);

	ptrF = ptrF + 1;
	printf("%p\n", ptrF);

	ptrF = ptrF + 2;
	printf("%p\n", ptrF);
}

void artimeticaDouble(void) {
	int *ptrD;

	printf("%p\n", ptrD);

	ptrD = ptrD + 1;
	printf("%p\n", ptrD);

	ptrD = ptrD + 2;
	printf("%p\n", ptrD);
}




