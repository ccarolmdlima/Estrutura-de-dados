////////////////////////////////////////////////
// programa que implementa uma matriz esparsa //
////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////
// declaracao de constantes //
//////////////////////////////

const int MODULO = 5;

///////////////////////////////
// declaracao das estruturas //
///////////////////////////////

struct no {
	int numero;
	struct no *proximoNo;
};

struct diretor {
	int resto;
	struct no *proximoNo;
	struct diretor *proximoDiretor;
};

/////////////////////////////
// declaracao de variaveis //
/////////////////////////////

struct diretor *cabeca = NULL;

///////////////////////////////////////////
// funcao que procura ou cria um diretor //
///////////////////////////////////////////

struct diretor *procurarDiretor(int restoProcurado) {
	struct diretor *ponteiro = cabeca;
	
	while ((ponteiro != NULL) && (ponteiro -> resto != restoProcurado)) {
		ponteiro = ponteiro -> proximoDiretor;
	}
	
	if (ponteiro == NULL) {
		ponteiro = (struct diretor *) malloc(sizeof(struct diretor));
		ponteiro -> resto = restoProcurado;
		ponteiro -> proximoDiretor = cabeca;
		ponteiro -> proximoNo = NULL;
		cabeca = ponteiro;
	}
	
	return ponteiro;
}

///////////////////////////////////////////////
// funcao que insere um no na matriz esparsa //
///////////////////////////////////////////////

void inserir (int numero) {
	struct diretor *diretorCerto = procurarDiretor(numero % MODULO);
	
	struct no *novoNo = (struct no *) malloc(sizeof(struct no));
	novoNo -> numero = numero;
	novoNo -> proximoNo = diretorCerto -> proximoNo;
	diretorCerto -> proximoNo = novoNo;
}

/////////////////////////////////////////
// funcao que imprime a matriz esparsa //
/////////////////////////////////////////

void imprimir() {
	struct diretor *ponteiroDiretor = cabeca;
	printf("====================\n");
	printf("resto\n");
	while (ponteiroDiretor != NULL) {
		printf("%d ->\t", ponteiroDiretor -> resto);
		
		struct no *ponteiroNo = ponteiroDiretor -> proximoNo;
		
		while (ponteiroNo != NULL) {
			printf("%d\t", ponteiroNo -> numero);
			ponteiroNo = ponteiroNo -> proximoNo;
		}
		printf("\n");
		ponteiroDiretor = ponteiroDiretor -> proximoDiretor;
	}
}

//////////////////////
// funcao principal //
//////////////////////

int main() {
	int i = 0;
	
	for (i = 0; i < 37; i++) {
		inserir(i);
	}
	
	imprimir();
}

