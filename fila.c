#include <stdio.h>
#define m 5

void inicializar(int *n, int *inicio, int *fim){

	*n = 0;
	*inicio = -1;
	*fim = -1;
}

int vazia(int *n){
	if(*n ==0){
		return 1;
	}
}
void enfileirar(int *fila, int *inicio, int *fim, int *n, int valor){

	if(*n == m){
		printf("\nFila cheia!\n");
	}else{
		if(*fim == m-1)
			*fim = 0;
			else
				*fim= *fim+1;
		if(*inicio == -1)
			*inicio = 0;
		
		*n=*n+1;
		fila[*fim] = valor;
	}
}

void desenfileirar(int *fila, int *inicio, int *fim, int *n){
	
	if(vazia(n) == 1){
		printf("\nFila vazia!\n");
	}else{
		
		if(*inicio == m-1){		
			*inicio = 0;
			*n = *n-1;
		}
		else{
			*inicio = *inicio +1;
			*n = *n-1;
			
		}	
		
	}
	
}

int main() {
	
	printf("FILA");
	
	int fila[m],i, f,n ;
	
	inicializar(&n,&i,&f);
	printf("\ninicio: %d fim: %d n: %d",i,f,n);	
	
	enfileirar(fila,&i,&f,&n, 5);
	printf("\ninicio: %d fim: %d n: %d",i,f,n);
	
	enfileirar(fila,&i,&f,&n, 4);
	printf("\ninicio: %d fim: %d n: %d",i,f,n);
	
	enfileirar(fila,&i,&f,&n, 3);
	printf("\ninicio: %d fim: %d n: %d",i,f,n);
	
	enfileirar(fila,&i,&f,&n, 2);
	printf("\ninicio: %d fim: %d n: %d",i,f,n);

	enfileirar(fila,&i,&f,&n, 1);
	printf("\ninicio: %d fim: %d n: %d",i,f,n);
	
	desenfileirar(fila,&i,&f,&n);
	printf("\ninicio: %d fim: %d n: %d",i,f,n);
	
		desenfileirar(fila,&i,&f,&n);
	printf("\ninicio: %d fim: %d n: %d",i,f,n);
		desenfileirar(fila,&i,&f,&n);
	printf("\ninicio: %d fim: %d n: %d",i,f,n);
		desenfileirar(fila,&i,&f,&n);
	printf("\ninicio: %d fim: %d n: %d",i,f,n);
		desenfileirar(fila,&i,&f,&n);
	printf("\ninicio: %d fim: %d n: %d",i,f,n);
	
	return 0;
}
