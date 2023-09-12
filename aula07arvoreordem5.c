///////////////////////////////////////////////////
// programa que implementa uma arvore de ordem 5 //
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//////////////////////////////
// declaracao de estruturas //
//////////////////////////////

struct no {
	int numero;
	struct no *filho1;
	struct no *filho2;
	struct no *filho3;
	struct no *filho4;
	struct no *filho5;
};

/////////////////////////////
// declaracao de variaveis //
/////////////////////////////

struct no *raiz = NULL;

///////////////////////////////////////
// funcao que insere um no na arvore //
///////////////////////////////////////

struct no *inserir(struct no *raiz, int numero) {
	if (raiz == NULL) {
		// caso facil: raiz nula (subarvore vazia)
		raiz = (struct no *) malloc(sizeof(struct no));
		raiz -> numero = numero;
		raiz -> filho1 = NULL;
		raiz -> filho2 = NULL;
		raiz -> filho3 = NULL;
		raiz -> filho4 = NULL;
		raiz -> filho5 = NULL;
	} else {
		// caso dificil: sortear um filho para inserir na arvore
		time_t t;
		srand((unsigned) time(&t));
		
		int sorteio = rand() % 5;
		
		if (sorteio == 0) {
			raiz -> filho1 = inserir(raiz -> filho1, numero);
		} else if (sorteio == 1) {
			raiz -> filho2 = inserir(raiz -> filho2, numero);
		} else if (sorteio == 2) {
			raiz -> filho3 = inserir(raiz -> filho3, numero);
		} else if (sorteio == 3) {
			raiz -> filho4 = inserir(raiz -> filho4, numero);
		} else if (sorteio == 4) {
			raiz -> filho5 = inserir(raiz -> filho5, numero);
		}
	}
	
	return raiz;
}

/////////////////////////////////
// funcao que imprime a arvore //
/////////////////////////////////

void imprimir(struct no *raiz, char *endentador) {
	if (raiz != NULL) {
		printf("%s%d\n", endentador, raiz -> numero);
	
		strcat(endentador, "----");
	
		imprimir(raiz -> filho1, endentador);
		imprimir(raiz -> filho2, endentador);
		imprimir(raiz -> filho3, endentador);
		imprimir(raiz -> filho4, endentador);
		imprimir(raiz -> filho5, endentador);
	}
	
}

//////////////////////
// funcao principal //
//////////////////////

int main() {
	char *endentador = (char *) malloc(sizeof(1024));
	strcpy(endentador, "");
	
	imprimir(raiz, "");
	
	raiz = inserir(raiz, 1);
	raiz = inserir(raiz, 2);
	
	imprimir(raiz, "");
}
