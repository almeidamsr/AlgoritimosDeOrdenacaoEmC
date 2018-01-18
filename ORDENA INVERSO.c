#include <stdio.h>
#include <stdlib.h>

void mostrarVetor( int vetor[], int tamanho ) {
	int i;
	int j=tamanho;
	for ( i = 0 ; i < tamanho ; i++) {
		vetor [i] = j;
		j--;
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

void insertionSort( int vetor[], int tamanho) {
int i,j,aux;
	
	for(i=1;i<tamanho;i++)
	{
	aux=vetor[i];
	j=i-1;
		while((aux<vetor[j])&&(j>=0))
		{
		vetor[j+1]=vetor[j];
		j=j-1;
		}
		vetor[j+1]=aux;
		}
		}

void Quick(int vetor[], int inicio, int fim){
	
	int pivo, aux, i, j, meio;
	
	i = inicio;
	j = fim;
	
	meio = (int) ((i + j) / 2);
	pivo = vetor[meio];
	
	do{
		while (vetor[i] < pivo) i = i + 1;
		while (vetor[j] > pivo) j = j - 1;
		
		if(i <= j){
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i = i + 1;
			j = j - 1;
		}
	}while(j > i);
	
	if(inicio < j) Quick(vetor, inicio, j);
	if(i < fim) Quick(vetor, i, fim);	

}


void main (void) {
	int i;
	
	int vetor[1000];
	for ( i = 0 ; i < 1000 ; i++ ) {
		vetor[i] = rand()%1000;	
	}
		printf("\n\n BUBBLE SORT \n\n");
		bubbleSort(vetor, 1000);	
		mostrarVetor(vetor, 1000);
		printf("\n\n FIM BUBBLE SORT \n\n");
		printf("\n\n INSERTION SORT \n\n");
		insertionSort(vetor, 1000);
		mostrarVetor(vetor, 1000);
		printf("\n\n FIM INSERTION SORT \n\n");
		printf("\n\n QUICK SORT \n\n");
		Quick(vetor, 0 , 1000);		
		mostrarVetor(vetor, 1000); 
		printf("\n\n FIM QUIK SORT \n\n");
}


