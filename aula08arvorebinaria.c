/////////////////////////////////////////////////////////////
// programa que implementa as navegacoes em arvore binaria //
/////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//////////////////////////////
// declaracao de estruturas //
//////////////////////////////

struct no {
	int numero;
	struct no *esquerda;
	struct no *direita;
};

///////////////////////////////////////
// funcao que insere um no na arvore //
///////////////////////////////////////

struct no *inserir (struct no *raiz, int numero) {
	if (raiz == NULL) {
		raiz = (struct no *) malloc(sizeof(struct no));
		raiz -> numero = numero;
		raiz -> esquerda = NULL;
		raiz -> direita = NULL;
	} else {
		if ((rand() % 2) == 0) {
			raiz -> esquerda = inserir(raiz -> esquerda, numero);
		} else {
			raiz -> direita = inserir(raiz -> direita, numero);
		}
	}
	
	return raiz;
}

//////////////////////////////////////////////
// funcao que navega  a arvore em PRE-ORDEM //
//////////////////////////////////////////////

void navegarPreOrdem(struct no *raiz) {
	if (raiz =! NULL){
		navegarPreOrdem(raiz -> esquerda);
		navegarPreOrdem(raiz -> direita);
		printf("%d\t", raiz -> numero);
	}
}

//////////////////////
// funcao principal //
//////////////////////

int main() {
	// declaracao de variaveis
	struct no *raiz = NULL;
	time_t t;
	
	// criacao da arvore
	int i = 0;
	for (i = 1; i < 10; i++) {
		raiz = inserir(raiz, i);
	}
	
	// navegacoes
	printf("Pre-Ordem: ");
	navegarPreOrdem(raiz);
	printf("\----------------------------\n");
	printf("Em-Ordem");
	navegarEmOrdem(raiz);
	printf("\----------------------------\n");
	printf("Pos-Ordem");
	navegadorPosOrdem(raiz);
}
