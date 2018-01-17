#include <stdio.h>


void criaVetorRand(int vetor[],int tamanho){
	int i;
	
	
	for(i=0;i<tamanho; i++){
		vetor [i]=rand()%tamanho;
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

			void mostrarVetor( int vetor[], int tamanho ) {
			int i;
					for ( i = 0 ; i < tamanho ; i++) {
					printf("%d ",vetor[i]);
					}
					}
					main() {
							int vetor[1000];
							criaVetorRand (vetor,1000);
							printf("vetor original: \n");
							mostrarVetor(vetor, 1000);
							insertionSort(vetor, 1000);
							printf("\n");
							printf("vetor ordenado: \n");
							mostrarVetor(vetor, 1000);
							printf("\n");
							}
