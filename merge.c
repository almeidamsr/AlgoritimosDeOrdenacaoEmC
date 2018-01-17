#include<stdio.h>
void intercalar (int vetor[],int aux[],int ini1, int ini2,int fim2)
{
 int in1=ini1,in2=ini2,fim1=in2-1,au=0,i;
 while(in1<=fim1 && in2<=fim2)
 {
  if (vetor[in1]<vetor[in2])
  {
   aux[au++] = vetor[in1++];
  }
  else
  {
   aux[au++] = vetor[in2++];
  }
 }
 while(in1<=fim1)
 {
  aux[au++] = vetor[in1++];
 }
 while(in2<=fim2)
 {
  aux[au++] = vetor[in2++];
 }
 
 for(i=0;i<au;i++){
  vetor[i+ini1]=aux[i];}
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
int main()
{
 int vetor[10]={45,23,10,25,89,75,46,32,20,1},aux[10],i;
 mergeSort(vetor,aux,0,9);
 for(i=0;i<10;i++)
 {
  printf("%d\t",vetor[i]);
 }
 return 0;
}
