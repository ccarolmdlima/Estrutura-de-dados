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
		printf("%d\t", raiz -> numero);
		navegarPreOrdem(raiz -> esquerda);
		navegarPreOrdem(raiz -> direita);
	}
}
