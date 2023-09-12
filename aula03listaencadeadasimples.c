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

/////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////
// programa de Lista encadeada simples //
////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////
// definição da estrutura do no //
/////////////////////////////////

struct no {
	int numero;
	struct no *proximo;
};

/////////////////////////////
// declaração de variaveis //
////////////////////////////

struct no *cabeca;

//////////////////////////////////////
// funcao que insere um no na lista //
//////////////////////////////////////

void inserir(int parametroNumero) {
	
	// criar um novo no
	struct no *novoNo = NULL;
	novoNo = (struct no *) malloc(sizeof(struct no*));
	novoNo -> numero = parametroNumero;
	novoNo -> proximo = NULL;
			
	if (cabeca == NULL) {
		cabeca = (struct no *) malloc(sizeof(struct no *));
		cabeca -> numero = parametroNumero;
		cabeca -> proximo = NULL;
	} else {
		// procurando o ultimo elemento da lista
		struct no *ponteiro = cabeca;
		while (ponteiro -> proximo != NULL) {
			ponteiro = ponteiro -> proximo;
		}
		
		// apontar o ultimo para o novo
		ponteiro -> proximo = novoNo;
	}
}

//////////////////////
// funcao principal //
/////////////////////

int main () {
	cabeca = (struct no *) malloc(sizeof(struct no *));
	cabeca -> numero = 10;
	cabeca -> proximo = NULL;
	
	printf("%s\n", cabeca);
	printf("%d\n", cabeca -> numero);
	
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////
// programa de Lista encadeada simples //
////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////
// definição da estrutura do no //
/////////////////////////////////

struct no {
	int numero;
	struct no *proximo;
};

/////////////////////////////
// declaração de variaveis //
////////////////////////////

struct no *cabeca;

//////////////////////////////////////
// funcao que insere um no na lista //
//////////////////////////////////////

void inserir(int parametroNumero) {
	
	// criar um novo no
	struct no *novoNo = NULL;
	novoNo = (struct no *) malloc(sizeof(struct no*));
	novoNo -> numero = parametroNumero;
	novoNo -> proximo = NULL;
			
	if (cabeca == NULL) {
		cabeca = novoNo;
	} else {
		// procurando o ultimo elemento da lista
		struct no *ponteiro = cabeca;
		while (ponteiro -> proximo != NULL) {
			ponteiro = ponteiro -> proximo;
		}
		
		// apontar o ultimo para o novo
		ponteiro -> proximo = novoNo;
	}
}

//////////////////////////////////////////////
// funcao que imprime os elementos da lista //
//////////////////////////////////////////////

void imprimir() {
	struct no *ponteiro = cabeca;
	
	while (ponteiro != NULL) {
		printf("%d\n", ponteiro -> numero);
		ponteiro = ponteiro -> proximo;
	}
}

//////////////////////
// funcao principal //
/////////////////////

int main () {
	inserir(1);
	inserir(2);
	inserir(3);
	inserir(4);
	inserir(5);
	inserir(6);
	
	imprimir();
	
}
