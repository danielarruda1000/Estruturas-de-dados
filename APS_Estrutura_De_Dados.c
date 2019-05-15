#include <stdio.h>
#include <stdlib.h>

/* 
	Faça um programa em C que crie uma árvore binária e implemente uma função
	que retorne a quantidade de folhas de uma árvore binária.
	
	Essa função deve obedecer ao protótipo:
	int folhas (Arv* a); 
*/

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

//Contador de folhas (nós que não possuem filhos)
int auxCont;
void Percorre(noArv* noAux){

	//Imprimindo Nós
	printf("%d ", noAux->valor);

	if (noAux->esq == NULL && noAux->dir == NULL)
		auxCont++;

	if (noAux->esq != NULL)
		Percorre(noAux->esq);

	if (noAux->dir != NULL)
		Percorre(noAux->dir);

}

int folhas(noArv* noAux){
	auxCont = 0;
	Percorre(noAux);
	return auxCont;
}
//Fim do Contador

int main() {

	/*
		Exemplo:
		      50
			/    \
		   20     60
		  /  \      \
		40    80     10
		
		Genéricamente:
			   A
			 /   \
			B     C
		   / \     \
		  D   E     F
	*/

	//Criando a arvore...    
	noArv* F = cria_arvore(10, NULL, NULL);
	noArv* E = cria_arvore(80, NULL, NULL);
	noArv* D = cria_arvore(40, NULL, NULL);
    noArv* C = cria_arvore(60, NULL, F);
	noArv* B = cria_arvore(20, D, E);
	noArv* A = cria_arvore(50, B, C); //Raíz
	
	printf("\nQuantidade de Folhas = %d\n", folhas(A));	

	return 0;
}