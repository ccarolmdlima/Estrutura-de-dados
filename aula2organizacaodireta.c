//////////////////////////////////
// programa de ordenacao direta //
//////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

/////////////////////////////
// declaracao de variaveis //
/////////////////////////////

int vetor[10000];
int i = 0;
int j = 0;

//////////////////////////////////
// funcao principal de execucao //
//////////////////////////////////

int main() {
	
	// inicializacao do vetor
	for (i = 0; i < 10000; i++) {
		vetor[i] = (rand() % 10000);
	}
	
	// impressao do vetor
	for (i = 0; i < 10000; i++) {
		printf("%d\n", vetor[i]);
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////
// programa de ordenacao direta //
//////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/////////////////////////////
// declaracao de variaveis //
/////////////////////////////

int vetor[10000];
int i = 0;
int j = 0;
time_t t;

//////////////////////////////////
// funcao principal de execucao //
//////////////////////////////////

int main() {
	
	// inicializacao da aleatoriedade
	srand((unsigned) time(&t));
	
	// inicializacao do vetor
	for (i = 0; i < 10000; i++) {
		vetor[i] = (rand() % 10000);
	}
	
	// impressao do vetor
	for (i = 0; i < 10000; i++) {
		printf("%d\n", vetor[i]);
	}
	
	// ordenacao propriamente dita
	for (i = 0; i < 9999; i++) { // do primeiro ao penultimo
		for (j = (i + 1);  j < 10000; j++) { // do proximo ao ultimo
			if (vetor[j] < vetor[i]) {
				int temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
	
	// impressao do vetor
	for (i = 0; i < 10000; i++) {
		printf("%d\n", vetor[i]);
	}
}
