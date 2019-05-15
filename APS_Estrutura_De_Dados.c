#include <stdio.h>
#include <stdlib.h>

/* 
	Fa�a um programa em C que crie uma �rvore bin�ria e implemente uma fun��o
	que retorne a quantidade de folhas de uma �rvore bin�ria.
	
	Essa fun��o deve obedecer ao prot�tipo:
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

//Contador de folhas (n�s que n�o possuem filhos)
int auxCont;
void Percorre(noArv* noAux){

	//Imprimindo N�s
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
		
		Gen�ricamente:
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
	noArv* A = cria_arvore(50, B, C); //Ra�z
	
	printf("\nQuantidade de Folhas = %d\n", folhas(A));	

	return 0;
}