/////////////////////////////////
// programa de busca exaustiva //
/////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/////////////////////////////
// declaracao de variaveis //
/////////////////////////////

int vetor[10000];
int i = 0;
time_t t;
int busca;
int achei;

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
	
	// definicao da busca
	printf("digite o numero a ser buscado: ");
	scanf("%\d", &busca);
	
	// busca propriamente dita
	achei = -1;
	for (i = 0; i < 10000; i++) {
		if (vetor[i] == busca) {
			achei = i;
		}
	}
	if (achei == -1) {
		printf("nao extiste!");
	} else {
		printf("achei na posicao %d", achei);
	}
}
