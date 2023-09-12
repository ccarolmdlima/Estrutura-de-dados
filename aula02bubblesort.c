//////////////////////////////
// programa de bubble sort //
/////////////////////////////

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
int temp;
int troquei;

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
	troquei = 1;
	while (troquei) {
		troquei = 0;
		
		for (i = 0; i < 9999; i++) { // do primeiro ao penúltimo
			if (vetor[i] > vetor[i + 1]) {
				temp = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = temp;
				troquei = 1;
			}
		}
	}
	
	// impressao do vetor
	for (i = 0; i < 10000; i++) {
		printf("%d\n", vetor[i]);
	}
}
