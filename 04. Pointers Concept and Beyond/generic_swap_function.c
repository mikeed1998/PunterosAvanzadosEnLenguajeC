#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void genericSwap(void*, void*, int);

void testInt(void);
void testDouble(void);
void testChar(void);
void testString(void);
void testArrayString(void);
void testMatrixString(void);

int main(int argc, char const *argv[]) {
	testMatrixString();
	return 0;
}

void genericSwap(void *a, void *b, int size) {	// we assume that size > 0
	// size - specifies the number of bytes
	void *tempMemory = malloc(size);
	// Memory Copy Function
	// void * memcpy(void *dest, const void *src, size_t num)
	memcpy(tempMemory, a, size);
	memcpy(a, b, size);
	memcpy(b, tempMemory, size);

	free(tempMemory);
}

void testInt(void) {
	int num1 = 5, num2 = 7;

	printf("num1: %d, num2: %d \n", num1, num2);
	genericSwap(&num1, &num2, sizeof(int));
	printf("num1: %d, num2: %d \n", num1, num2);
}

void testDouble(void) {
	double average1 = 90.5, average2 = 89.7;

	printf("average1: %lf, average2: %lf \n", average1, average2);
	genericSwap(&average1, &average2, sizeof(double));
	printf("average1: %lf, average2: %lf \n\n", average1, average2);
}

void testChar(void) {
	char letra1 = 'a', letra2 = 'b';

	printf("letra1: %c, letra2: %c \n", letra1, letra2);
	genericSwap(&letra1, &letra2, sizeof(char));
	printf("letra1: %c, letra2: %c \n\n", letra1, letra2);
}

void testString(void) {
	char *cadena1 = "Hola", *cadena2 = "Adios";

	printf("cadena1: %s, cadena2: %s \n", cadena1, cadena2);
	genericSwap(&cadena1, &cadena2, sizeof(char*));
	printf("cadena1: %s, cadena2: %s \n\n", cadena1, cadena2);
}

void testArrayString(void) {
	char **arrayCadena1 = (char**)malloc(sizeof(char*) * 3);
	char **arrayCadena2 = (char**)calloc(3, sizeof(char*));

	arrayCadena1[0] = strdup("uno");
    arrayCadena1[1] = strdup("dos");
    arrayCadena1[2] = strdup("tres");

	arrayCadena2[0] = "cuatro";
    arrayCadena2[1] = "cinco";
    arrayCadena2[2] = "seis";

	for (int i = 0, j = 0; i < 3 && j < 3; ++i, ++j) 
		printf("arrayCadena1[%d]: %s, arrayCadena2[%d]: %s \n", i, arrayCadena1[i], j, arrayCadena2[j]);
	printf("\n");
	genericSwap(&arrayCadena1, &arrayCadena2, sizeof(char**));
	printf("\n");
	for (int i = 0, j = 0; i < 3 && j < 3; ++i, ++j) 
		printf("arrayCadena1[%d]: %s, arrayCadena2[%d]: %s \n", i, arrayCadena1[i], j, arrayCadena2[j]);

	for (int i = 0; i < 3; i++) {
        free(arrayCadena1[i]);
    }

	free(arrayCadena1);
	free(arrayCadena2);
}

void testMatrixString(void) {
	char *letras[9] = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
	
	int cont = 0;

	char ***matrixCadena1 = (char***)malloc(sizeof(char**) * 3);
	for(int i = 0; i < 3; i++) *(matrixCadena1 + i) = (char**)malloc(sizeof(char*) * 3);
	for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++) *( *(matrixCadena1 + i) + j) = (char*)malloc(sizeof(char) * 10);
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			*( *(matrixCadena1 + i) + j) = strdup(letras[cont]);
			cont++;
		}
	}

	char *letras2[9] = {"j", "k", "l", "m", "n", "o", "p", "q", "r"};
	int cont2 = 0;

	char ***matrixCadena2 = (char***)calloc(3, sizeof(char**));
	for(int i = 0; i < 3; i++) *(matrixCadena2 + i) = (char**)calloc(3, sizeof(char*));
	for(int i = 0; i < 3; i++) for(int j = 0; j < 3; j++) *( *(matrixCadena2 + i) + j) = (char*)calloc(10, sizeof(char));

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			*( *(matrixCadena2 + i) + j) = letras2[cont2];
			cont2++;
		}
	}

	printf("\n");

	printf("\n\nOriginal: \n\n");

	for(int i = 0; i < 3; i++) {
		printf("\n");
		for(int j = 0; j < 3; j++) {
			printf("[%s]", *( *(matrixCadena1 + i) + j));
		}
	}

	printf("\n");

	for(int i = 0; i < 3; i++) {
		printf("\n");
		for(int j = 0; j < 3; j++) {
			printf("[%s]", *( *(matrixCadena2 + i) + j));
		}
	}

	printf("\n\nSwapped: \n\n");

	genericSwap(&matrixCadena1, &matrixCadena2, sizeof(char***));

	for(int i = 0; i < 3; i++) {
		printf("\n");
		for(int j = 0; j < 3; j++) {
			printf("[%s]", *( *(matrixCadena1 + i) + j));
		}
	}

	printf("\n");

	for(int i = 0; i < 3; i++) {
		printf("\n");
		for(int j = 0; j < 3; j++) {
			printf("[%s]", *( *(matrixCadena2 + i) + j));
		}
	}

	printf("\n");

	// Liberando la memoria
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			free(*( *(matrixCadena1 + i) + j));
			free(*( *(matrixCadena2 + i) + j));
		}
		free(*(matrixCadena1 + i));
		free(*(matrixCadena2 + i));
	}

	free(matrixCadena1);
	free(matrixCadena2);
}

// *( *(matrixCadena1 + i) + j) = (band == 2) ? strdup(letras[i + 6]) : ( (band == 1) ? strdup(letras[i + 3]) : strdup(letras[i]) );

// Para inicializar arreglos de punteros a cadenas (arrays de punteros a char) después de haber reservado memoria dinámicamente con calloc, debes asignar cada elemento por separado utilizando la notación de índices.
// Cuando utilizas malloc, estás asignando una dirección de memoria a los punteros y, a continuación, necesitas copiar los valores de las cadenas a esas direcciones de memoria reservadas. Puedes hacerlo utilizando funciones como strcpy o simplemente asignando las direcciones de las cadenas manualmente.
// En este ejemplo, he utilizado strdup para duplicar las cadenas y asignarlas a las direcciones de memoria reservadas por malloc. De esta forma, puedes asegurarte de que cada puntero tenga su propia copia de las cadenas, lo cual es importante para evitar problemas de modificación accidental o liberación duplicada de memoria.

/*
La diferencia en la forma de liberar la memoria entre el uso de malloc y calloc en los ejemplos anteriores se debe a cómo se comportan estas dos funciones de asignación de memoria dinámica.

Cuando utilizas malloc, estás asignando bloques de memoria sin inicializar su contenido. En este caso, si asignas memoria para punteros a cadenas con malloc, los punteros no contienen valores válidos y apuntan a direcciones de memoria aleatorias. Por lo tanto, antes de liberar la memoria, es necesario asegurarse de liberar cada cadena individualmente (que son apuntadas por los punteros) usando free.

Por otro lado, cuando utilizas calloc, estás asignando bloques de memoria inicializados con ceros. En este caso, cuando reservas memoria para punteros a cadenas con calloc, los punteros apuntan automáticamente a direcciones de memoria nulas (es decir, NULL). Cuando llamas a free en un puntero nulo, no ocurre nada, no se genera ningún error ni fuga de memoria. Por lo tanto, no es necesario liberar las cadenas individualmente cuando utilizas calloc, solo necesitas liberar el bloque de punteros con free(arrayCadena1) y free(arrayCadena2).

Para resumir:

Con malloc: Los punteros a cadenas no están inicializados, debes liberar cada cadena individualmente antes de liberar el bloque de punteros.
Con calloc: Los punteros a cadenas están automáticamente inicializados con NULL, por lo que solo necesitas liberar el bloque de punteros.
*/






