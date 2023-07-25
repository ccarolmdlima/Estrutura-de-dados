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


---------------------------------------------------------------------------------------------------------------
///////////////////////////////////////
//// programa de inversão de vetor ////
///////////////////////////////////////


// importação de pacotes
#include <stdio.h>

// declaração de variáveis
int vetorOriginal[10];
int vetorInvertido[10];
int i = 0;

////////////////////////////////////////////////
//// função principal de execução do código ////
////////////////////////////////////////////////

int main() {
	
	// limpeza dos vetores
	for (i = 0; i < 10; i++) {
	vetorOriginal[i] = 0;	
	vetorInvertido[i] = 0;
	}

	// preenchimento do vetor
	for (i = 0; i < 10; i++) {
		printf("Digite o valor da posicao %d do vetor: ", i);
		scanf("%d", &vetorOriginal[i]);
	}
	
	// impressão do vetor original
	for (i = 0; i < 10; i++) {
		printf("vetorOriginal[%d] = %d\n", i, vetorOriginal[i]);
	}
	
	// inversão do vetor
	for (i = 9; i >= 0; i--) {
		vetorInvertido[9 - i] = vetorOriginal[i];
	}
	
	// impressão do vetor invertido
	for (i = 0; i < 10; i++) {
		printf("vetorInvertido[%d] = %d\n", i, vetorInvertido[i]);
	}
}
