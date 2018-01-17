#include <stdio.h>

int n=0;
void criaVetorRand(int vetor[],int tamanho){
	int i;
	
	
	for(i=0;i<tamanho; i++){
		vetor [i]=rand()%tamanho;
	}
}


void criarVetorInverso(int vetor[], int tamanho){
	int i;
	int j=tamanho;
	
	for(i=0; i<tamanho; i++){
		vetor [i] = j;
		j--;
		
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
					n++;
				}
				  n++;
				}
				k--;
				}
				 n++;
				 
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
		printf("\n\n %d \n\n",&n);
		printf("vetor original: \n");
		mostrarVetor(vetor, 1000);
		bubbleSort(vetor, 1000);
		printf("\n");
		printf("vetor ordenado: \n");
		mostrarVetor(vetor, 1000);
		printf("\n");
		}
