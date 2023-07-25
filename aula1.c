////////////////////////////////////////////
//// programa de preenchimento de vetor ////
////////////////////////////////////////////


// importação de pacotes
#include <stdio.h>

// declaração de variáveis
int vetor[10]; 
int i = 0;

////////////////////////////////////////////////
//// função principal de execução do código ////
////////////////////////////////////////////////

int main() {
	// limpeza da memória
	for (i = 0; i < 10; i++) {
		vetor[i] = 0;
	}
	
	// preenchimento do vetor
	for (i = 0; i < 10; i++) {
		printf("Digite o valor da posicao %d do vetor: ", i);
		scanf("%d", &vetor[i]);
	}
	
	// impressão do vetor
	for (i = 0; i < 10; i++) {
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}

}
