/////////////////////////////////////////
// Programa de Lista Encadeada simples //
////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////
// Definição da Estrutura do No //
/////////////////////////////////

struct no {
	int numero;
	struct no *proximo;
};

/////////////////////////////
// Declaração de variaveis //
////////////////////////////

struct no *cabeca;

//////////////////////
// Função principal //
/////////////////////

int main () {
	cabeca = (struct no *) malloc(sizeof(struct no *));
	cabeca -> numero = 10;
	cabeca -> proximo = NULL;
	
	printf("%s\n", cabeca);
	printf("%d\n", cabeca -> numero);
	
}
