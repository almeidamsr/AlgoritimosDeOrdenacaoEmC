#include <stdio.h>
#include <stdlib.h>

void mostrarVetor( int vetor[], int tamanho ) {
	int i;
	for ( i = 0 ; i < tamanho ; i++) {
		printf("%d ",vetor[i]);
	}
}


 void bubbleSort( int vetor[], int tamanho )
{
int i,j,aux;
int k = tamanho - 1 ;
		for(i = 0; i < tamanho; i++)
		{
		for(j = 0; j < k; j++)
		{
				if(vetor[j] > vetor[j+1])
				{
					aux = vetor[j];
					vetor[j] = vetor[j+1];
					vetor[j+1]=aux;
				}
				
				}
				k--;
				}
				}



void main (void) {
	int i;
	int vetor[100000];
	for ( i = 0 ; i < 100000 ; i++ ) {
		vetor[i] = rand()%100000;
	}
	
	bubbleSort(vetor, 100000);
	mostrarVetor(vetor, 100000);	
}
