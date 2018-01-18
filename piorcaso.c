#include <stdio.h>
#include <stdlib.h>

int n=0, m=0 , x=0 , y=0;
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
				n++;	
				}
			n++;	  
			}
			k--;
			n++;		
		}
      		 
}

void insertionSort( int vetor[], int tamanho) {
int i,j,aux;
	
	for(i=1;i<tamanho;i++)
	{
	m=m+1;
	aux=vetor[i];
	j=i-1;
		while((aux<vetor[j])&&(j>=0))
		{
		m=m+1;
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
		x++;
	}while(j > i);
	
	if(inicio < j) Quick(vetor, inicio, j);
	if(i < fim) Quick(vetor, i, fim);	
	x++;
}

void intercalar (int vetor[],int aux[],int ini1, int ini2,int fim2)
{
 int in1=ini1,in2=ini2,fim1=in2-1,au=0,i;
 while(in1<=fim1 && in2<=fim2)
 {
  if (vetor[in1]<vetor[in2])
  {
   aux[au++] = vetor[in1++];
   y++;  
  }
  else
  {
   aux[au++] = vetor[in2++];
   y++; 
  }
  y++;
 }
 while(in1<=fim1)
 {
  aux[au++] = vetor[in1++];
  y++;
 }
 while(in2<=fim2)
 {
  aux[au++] = vetor[in2++];
  y++;
 }
 
 for(i=0;i<au;i++){
 vetor[i+ini1]=aux[i];}
 y++; 
}
void mergeSort (int vetor[], int aux[],int esq, int dir)
{
 int meio,i;
 if(esq<dir)
 {
  meio=(esq+dir)/2;
  mergeSort(vetor,aux,esq,meio);
  mergeSort(vetor,aux,meio+1,dir);
  intercalar(vetor,aux,esq,meio+1,dir);  
  }
}


void main (void) {
	int i;
	int j=1000;
	int vetor[1000],aux[1000];
	
	for ( i = 0 ; i < 1000 ; i++ ) {
		vetor[i]=j;
		j--;
		printf(" %d ", vetor[i]);
		aux[i]=vetor[i];	
	}
		printf ("\n Mostrando Vetor Invertido a cima");
		printf("\n\n Ordenando Vetor ... \n\n");
		
		printf("\n\n BUBBLE SORT \n\n");
		bubbleSort(vetor, 1000);	
		mostrarVetor(vetor, 1000);
		printf("\n\n n= %d \n\n",n);
		printf("\n\n FIM BUBBLE SORT \n\n");
		printf("\n\n INSERTION SORT \n\n");
		
		insertionSort(vetor, 1000);
		mostrarVetor(vetor, 1000);
		printf("\n\n m= %d \n\n",m);
		printf("\n\n FIM INSERTION SORT \n\n");
		
		printf("\n\n QUICK SORT \n\n");
		Quick(vetor, 0 , 1000);		
		mostrarVetor(vetor, 1000);
		printf("\n\n x= %d \n\n", x) ;
		printf("\n\n FIM QUIK SORT \n\n");
		
		printf("\n\n MERGE SORT \n\n");
		mergeSort(vetor,aux,0,1000);
		mostrarVetor(vetor,1000);
		printf("\n\n y= %d \n\n", y);
		printf("\n\n FIM MERGE SORT \n\n");
}


