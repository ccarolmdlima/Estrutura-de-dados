/////////////////////////////////////////////////
//    programa que implementa uma fila FIFO    //
// a fila implementada tem a entrada na cabeca //
/////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////
// declaracao da estrutura do no //
///////////////////////////////////

struct no {
	int numero;
	struct no *proximo;
};

/////////////////////////////
// declaracao de variaveis //
/////////////////////////////

struct no *cabeca = NULL;

/////////////////////////////////////
// funcao que insere um no na fila //
/////////////////////////////////////

void inserir(int numero) {
	// instanciacao da memoria
	struct no *novoNo = (struct no *) malloc(sizeof(struct no));
	novoNo -> numero = numero;
	novoNo -> proximo = cabeca;
	cabeca = novoNo;
}

/////////////////////////////////////
// funcao que remove um no na fila //
/////////////////////////////////////

int remover() {
	// variaveis
	struct no *ponteiro = cabeca;
	int retorno = 0;
	
	if (cabeca != NULL) {
		if (cabeca -> proximo == NULL) {
			retorno = cabeca -> numero;
			free(cabeca);
			cabeca = NULL;
		} else {
			// navegacao na fila ate o penultimo
			while (ponteiro -> proximo -> proximo != NULL) {
				ponteiro = ponteiro -> proximo
			}
			
			retorno = ponteiro -> proximo -> numero;
			struct no *temp = ponteiro -> proximo;
			ponteiro -> proximo = NULL;
			free(temp);
		}
	}
	
	return retorno;
}


------------------------------------------------------------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////
//    programa que implementa uma fila FIFO    //
// a fila implementada tem a entrada na cabeca //
/////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////
// declaracao da estrutura do no //
///////////////////////////////////

struct no {
	int numero;
	struct no *proximo;
};

/////////////////////////////
// declaracao de variaveis //
////////////////////////////

struct no *cabeca = NULL;

/////////////////////////////////////
// funcao que insere um no na fila //
/////////////////////////////////////

void inserir(int numero) {
	// instanciacao da memoria
	struct no *novoNo = (struct no *) malloc(sizeof(struct no));
	novoNo -> numero = numero;
	novoNo -> proximo = cabeca;
	cabeca = novoNo;
}

/////////////////////////////////////
// funcao que remove um no na fila //
/////////////////////////////////////

int remover() {
	// variaveis
	struct no *ponteiro = cabeca;
	int retorno = 0;
	
	if (cabeca != NULL) {
		if (cabeca -> proximo == NULL) {
			retorno = cabeca -> numero;
			free(cabeca);
			cabeca = NULL;
		} else {
			// navegacao na fila ate o penultimo
			while (ponteiro -> proximo -> proximo != NULL) {
				ponteiro = ponteiro -> proximo;
			}
			
			retorno = ponteiro -> proximo -> numero;
			free(ponteiro -> proximo);
			ponteiro -> proximo = NULL;
		}
	}
	
	return retorno;
}

//////////////////////
// funcao principal //
/////////////////////

int main () {
	printf("%d\n", remover());
	printf("=====================\n");
	
	inserir(1);
	printf("%d\n", remover());
	printf("=====================\n");
	
	inserir(1);
	inserir(2);
	inserir(3);
	inserir(4);
	inserir(5);
	printf("%d\n", remover());
	printf("%d\n", remover());
	printf("%d\n", remover());
	printf("%d\n", remover());
	printf("%d\n", remover());
	printf("=====================\n");
}
