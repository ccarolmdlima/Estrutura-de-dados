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
