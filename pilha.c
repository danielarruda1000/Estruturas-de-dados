#include <stdio.h>
#define m 5

void inicia_pilha(int *topo){
	*topo = -1;
}

void info_topo(int *pilha,int *topo){
	
	if(*topo == -1)
		printf("\nPilha vazia!");
		else if (*topo <= m-1 )	
			printf("\nValor no topo: %d ",pilha[*topo]);
}

void empilhar(int *pilha, int *topo, int valor){
	
	if(*topo == m-1)
		printf("\nPilha Cheia");
		else
			*topo = *topo+1;
			pilha[*topo] = valor;
	
}

void desempilhar(int *topo){
	
	if(*topo == -1)
		printf("Pilha ja esta vaiza");
		else
			*topo = *topo-1;
	
}

int main() {
	
	printf("Algoritmo de Pilha\n");
	
	
	int pilha[m], topo;
	
	inicia_pilha(&topo);
//	info_topo(&pilha, &topo);
	
	empilhar(&pilha, &topo, 5);
	empilhar(&pilha, &topo, 4);
	info_topo(&pilha, &topo);
	printf(" - %d", topo);
	
	desempilhar(&topo);
	info_topo(&pilha, &topo);
	printf(" - %d", topo);
	
	return 0;
}
