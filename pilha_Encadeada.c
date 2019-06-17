#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	
	int info;
	struct no* prox;
	
}no;

no* cria_no(){
	
	no* aux;
	if(aux){
		aux = (no*) malloc(sizeof(no));
		aux -> prox = NULL;
	}
	return aux;
}

no* inserir_inicio(no *pilha, int valor){

		no*aux = cria_no();
		aux->info = valor;
	
		if(pilha == NULL){
			pilha = aux;
			aux->prox = NULL;	
		}
		return pilha;
}

no* empilhar(no* topo, int valor){
	
	no* aux = cria_no();
	aux->info = valor;
	
	aux->prox = topo;
	topo = aux;

	return topo;
}

no* desempilhar(no* topo){
	
	no* aux = cria_no();
	aux= topo;
	
	topo = topo->prox;
	free(aux);
	
	return topo;
}

int main() {
	
	no* pilha = NULL;
	no* topo = NULL;

	pilha = inserir_inicio(pilha, 10);
	topo = pilha;
	
	topo = empilhar(topo, 20);
	topo = empilhar(topo, 30);	
	
	topo = desempilhar(topo);
	
	
	return 0;
}
