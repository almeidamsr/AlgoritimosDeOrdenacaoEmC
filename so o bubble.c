#include <stdio.h>
#include <time.h>
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
	void mostrarVetor( int vetor[], int tamanho ) {
	int i;
		for ( i = 0 ; i < tamanho ; i++) {
		printf("%d ",vetor[i]);
		}
		}
		main() {
		int vetor[10];
		printf("vetor original: \n");
		mostrarVetor(vetor, 10);
		bubbleSort(vetor, 10);
		printf("\n");
		printf("vetor ordenado: \n");
		mostrarVetor(vetor, 10);
		printf("\n");
		}
