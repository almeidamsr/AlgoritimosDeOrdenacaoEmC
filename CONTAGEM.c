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

void intercalar (int v[],int aux[],int ini1, int ini2,int fim2)
{
 int in1=ini1,in2=ini2,fim1=in2-1,au=0,i;
 while(in1<=fim1 && in2<=fim2)
 {
  if (v[in1]<v[in2])
  {
   aux[au++] = v[in1++];
  }
  else
  {
   aux[au++] = v[in2++];
  }
 }
 while(in1<=fim1)
 {
  aux[au++] = v[in1++];
 }
 while(in2<=fim2)
 {
  aux[au++] = v[in2++];
 }
 
 for(i=0;i<au;i++){
  v[i+ini1]=aux[i];}
}
void mergeSort (int v[], int aux[],int esq, int dir)
{
 int meio,i;
 if(esq<dir)
 {
  meio=(esq+dir)/2;
  mergeSort(v,aux,esq,meio);
  mergeSort(v,aux,meio+1,dir);
  intercalar(v,aux,esq,meio+1,dir);  
 }
}

void main (void) {
	int i;
	int cont, cont2, cont3, cont4;
	int vetor[1000];
	for ( i = 0 ; i < 1000 ; i++ ) {
		vetor[i] = rand()%1000;	
	}
		printf("\n\n BUBBLE SORT \n\n");
		for ( cont = 0 ; cont < 1000 ; cont++ )
		{
			bubbleSort(vetor, 1000);	
		}
		printf("\n contagem Bubble: \n");
		printf("\n\n %d \n\n", &cont);
		mostrarVetor(vetor, 1000);
		printf("\n\n FIM BUBBLE SORT \n\n");
	
					printf("\n\n INSERTION SORT \n\n");
					for ( cont2 = 0 ; cont2 < 1000 ; cont2++ )
					{
						insertionSort(vetor, 1000);
					}
					printf("\n contagem Insertion: \n");
					printf("\n\n %d \n\n", &cont2);
					mostrarVetor(vetor, 1000);
					printf("\n\n FIM INSERTION SORT \n\n");
	
							printf("\n\n QUICK SORT \n\n");
							for ( cont3 = 0 ; cont3 < 1000 ; cont3++ )
							{
								Quick(vetor, 0 , 1000);		
							}
							printf("\n contagem Quick: \n");
							printf("\n\n %d \n\n", &cont3);
							mostrarVetor(vetor, 1000); 
							printf("\n\n FIM QUIK SORT \n\n");
							
}


