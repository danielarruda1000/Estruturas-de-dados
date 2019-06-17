#include <stdio.h>

typedef struct no{
	int info;
	struct no *prox;
}no;


no* cria_no(){
	
	no* aux;
	if(aux){
		aux = (no*) malloc(sizeof(no));
		aux -> prox = NULL;
	}
	return aux;
}

void percorre(no *lista){
	
	no* percorre = lista;
	
	while(percorre != NULL){
		printf(" %d ", percorre->info);
		percorre = percorre->prox;
	}
	
}

no* inserir_inicio(no *lista, int valor){

		no*aux = cria_no();
		aux->info = valor;
	
		if(lista == NULL){
			lista = aux;
			aux->prox = NULL;
				
		}
		else{
			aux->prox = lista;
			lista = aux;
		}
	return lista;
}

void inserir_fim(no* lista, int valor){

	no* aux = cria_no();
	aux->info = valor;
	
	no* percorre = lista;
	
	while(percorre->prox != NULL){
		percorre = percorre->prox;
	}
	
	percorre->prox = aux;
	aux->prox = NULL;
}

void inserir_meio(no* lista, int onde, int valor){
	
	no *inserir = cria_no();
	inserir->info = valor;
	no* percorre = lista;
	
	while(percorre->info != onde){
		percorre = percorre->prox;
	}
	if(percorre->prox == NULL)
		inserir_fim(lista, valor);
	else{
		inserir->prox = percorre->prox;
		percorre->prox = inserir;
	}
		
		
}

int main() {
	
	printf("Lista ancadeada\n");
		
	no *lista1 = NULL;
	
	lista1 = inserir_inicio(lista1,10);
	
	inserir_fim(lista1,20);
	inserir_fim(lista1,30);
	inserir_fim(lista1,40);
	
	//inserir na lista1 depois do no de valor 30 um novo no de valor 70
	inserir_meio(lista1,30,70);
	
	percorre(lista1);

	
	return 0;
}
