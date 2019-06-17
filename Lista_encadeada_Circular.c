#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int info;
	struct no *prox;
}no;

no* cria_no(){
	no* aux = (no*) malloc(sizeof(no));
	aux->prox = NULL;
	return aux;
}

no* cria_lista(no*lista){
	lista= NULL;
	return lista;
}

no* inserir_inicio(no* lista, int valor){
	
	no* aux = cria_no();
	aux->info = valor;

	if(lista == NULL){
		lista = aux;
		aux->prox = lista;
	}
	return aux;
}

no* inserir(no*lista, int valor){
	
	if(lista != NULL){
		no* aux = cria_no();
		aux->info = valor;
		
		no* percorre = cria_no();
		percorre = lista;
		
		while(percorre->prox != lista){
			
			percorre = percorre->prox;
			
		}
		
		aux->prox = percorre->prox;
		percorre->prox = aux;
		
		return lista;	
	
	}
}

no* remove_inicio(no*lista){
	
	no* aux = cria_no();
	aux = lista;
	
	no* ant = cria_no();
	ant = lista;
	
	while(ant->prox != lista){
		ant= ant->prox;
	}
	
	ant->prox = aux->prox;
	lista = aux->prox;
	free(aux);
	return lista;
	
}

no*remove_no(no*lista,int valor){
	
	no* aux = cria_no();
	aux = lista;
	
	no* ant = cria_no();
	ant = lista;
	
	if(aux->info == valor && aux->prox == lista){
		lista = NULL;
		free(aux);
		
	}else{
		
		if(lista != NULL){
	
			do{
				ant= aux;
				aux= aux->prox;
			
			}while(aux->info != valor && aux!=lista);
		
			if(aux->info != valor){
				printf("Valor nao encontrado na lista");
			}else{
				ant->prox = aux->prox;
				free(aux);
			}
		}
		
		return lista;
	}
}

int main() {

	no* listaC = cria_no();
	listaC = cria_lista(listaC);
	
	
	listaC = inserir_inicio(listaC, 10); //Inserção do primeiro elemento
	listaC = inserir(listaC,20);
	listaC = inserir(listaC,30);
	listaC= remove_inicio(listaC);
	listaC = inserir(listaC,40);
	listaC = inserir(listaC,50);
	listaC = remove_no(listaC,40);

	//Visualizando a lista	
	printf(" %d ", listaC->info);
	printf(" %d ", listaC->prox->info);
	printf(" %d ", listaC->prox->prox->info);
	printf(" %d ", listaC->prox->prox->prox->info);
	printf(" %d ", listaC->prox->prox->prox->prox->info);
	
	return 0;
}
