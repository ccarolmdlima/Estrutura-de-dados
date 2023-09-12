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


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////
//// programa de inversão de vetor ////
///////////////////////////////////////


// importação de pacotes
#include <stdio.h>

// declaração de variáveis
int matriz[2][3], transposta[3][2], i = 0, j = 0;

////////////////////////////////////////////////
//// função principal de execução do código ////
////////////////////////////////////////////////

int main() {
	
	// limpeza de memória
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			matriz[i][j] = 0;
			transposta[j][i];
		}
	}
	
	//preenchimento da matriz
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("Digite o valor da matriz[%d][%d] = ", 
												i, j);
			scanf("%d", &matriz[i][j]);
			
		}
	}
	
	// transposicao propriamente dita
	for(i = 0; i < 2; i ++) {
		for(j = 0; j < 3; j++) {
			transposta[j][i] = matriz [i][j];
		}
	}
	
	// impressao das matrizes
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 2; j++) {
			printf("%d\t", transposta[i][j]);
		}
		printf("\n");
	}
}
