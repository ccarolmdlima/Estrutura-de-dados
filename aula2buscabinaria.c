///////////////////////////////
// programa de busca binaria //
///////////////////////////////

#include <stdio.h>

/////////////////////////////
// declaracao de variaveis //
/////////////////////////////

int vetor[10000];
int i;
int inicio;
int meio;
int fim;
int busca = 0;

//////////////////////////////////
// funcao principal de execucao //
//////////////////////////////////

int main() {
	
	// inicializacao do vetor
	for (i = 0; i < 10000; i++) {
		vetor[i] = i;
	}
	
	// definicao da busca
	printf("digite o numero a ser buscado: ");
	scanf("%\d", &busca);
	
	// busca propriamente dita
	inicio = 0;
	fim = 9999;
	while (fim >= inicio) {
		meio = ((inicio + fim)/2);
		
		if (vetor[meio] == busca) {
			printf("esta na posicao %d", vetor[meio]);
			return 0;
		} else if (vetor[meio] > busca) {
			fim = (meio - 1);
		} else {
			inicio = (meio + 1);
		}
	}
	printf("nao existe!");
}
