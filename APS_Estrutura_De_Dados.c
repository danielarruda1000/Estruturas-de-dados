#include <stdio.h>
#include <stdlib.h>

typedef struct noArv{
	int valor;
	struct noArv* esq;
	struct noArv* dir;
}noArv;

noArv* cria_no(){
	
	noArv* aux = (noArv*) malloc(sizeof(noArv));
	aux->dir = NULL;
	aux->esq = NULL;
	
	return aux;
}

noArv* cria_arvore(int valor, noArv* esquerda, noArv* direita){

	noArv* raiz = cria_no();
	
	raiz->valor = valor;
	raiz->esq = esquerda;
	raiz->dir = direita;
	
	return raiz;
}


int folhas(noArv* raiz){
	


	
	
}

int main() {

	//Criando a avore...
	noArv* a1 = cria_arvore(20, cria_no(), cria_no());
	noArv* a2 = cria_arvore(40, cria_no(), cria_no());
	noArv* a3 = cria_arvore(20, a1, a2);
	noArv* a4 = cria_arvore(70, cria_no(), cria_no());
	noArv* a5 = cria_arvore(60, cria_no(), a4);
	noArv* raiz = cria_arvore(50, a3, a5);
	
	printf(" %d ", folhas(raiz));
	
	
	return 0;
}
