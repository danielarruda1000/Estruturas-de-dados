#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int info;
	struct no* prox;
	
}no;

no* cria_no(){
	
	no*aux = (no*) malloc(sizeof(no));
	aux->prox = NULL;
	
	return aux;
}

no* cria_fila(no* fila){
	
	if(fila)
		fila = NULL;
	
	return fila;
}

no* insere(no* fim, int valor){
	
	no* aux = cria_no();
	aux->info = valor;

	fim->prox = aux;
	fim = aux;
	
	
	return fim;
}

no* insere_inicio(no*fila, int valor){
	
	no* aux = cria_no();
	aux->info = valor;
	
	fila = aux;
	
	return fila;
}

no* remover(no* fila){
	
	if(fila != NULL){

		no* aux = cria_no();
		aux = fila;
	
		fila = fila->prox;
		free(aux);
		
	}else{
		printf("\nFila vazia!\n");
	}
	return fila;
}

int main() {
	
	no* fila1 = cria_fila(fila1);
	no* fim1 = cria_fila(fim1);
	
	fila1 = insere_inicio(fila1,5);
	fim1 = fila1;
	
	fim1 = insere(fim1, 10);
	fim1 = insere(fim1, 30);
	
	fila1 = remover(fila1);

	
	return 0;
}
