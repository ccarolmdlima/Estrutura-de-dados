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
}
