#include <stdio.h>

#define MAX 5

int topo, estado;

void push (int pilha[], int item)
	{
			if (topo == (MAX-1)){
				estado = 0;
			}
			else{
				estado = 1;
				topo++;
				pilha [topo] = item;
			}
	}
	
int pop (int pilha[])
	{
		int ret;
		if (topo == -1){
			ret =0 ;
			estado = 0;
		}
		else{
			estado = 1;
			ret = pilha [topo] ;
			topo --;
		}
	return ret;
}


void mostrar(int pilha[]){
	
	int i;
	printf("\n Conteudo da pilha: ");
	if(topo == -1){
		printf("\nPilha vazia!");
	}else{
		
		for (i = topo; i>=0; --i){
			
			printf("\n------------\n|     %d    |\n------------", pilha[i]);
		}
		printf("\n");
	}
	
}

void main(){
	
	int pilha[MAX],item;
	int ch;
	topo = -1;
	
	
	do{
		do{
			printf("\nMENU");
			printf("\n1.PUSH : inserir na pilha");
			printf("\n2.POP : apagar da pilha");
			printf("\n3.Sair");
			printf("\nESCOLHA: \n");
			scanf("%d",&ch);
			if(ch<1|| ch>3){
				printf("Opcao invalida, tente de novo");
			}
			
		}while(ch<1 || ch>3);
		
		switch(ch){
			case 1:
				printf("\n Entre com o item\n");
				scanf("%d", &item);
				printf("\n %d", item);
				push(pilha,item);
				if(estado){
					printf("Pilha apos insercao");
					mostrar(pilha);
					if(topo == MAX-1){
						
						printf("\nA pilha esta cheia\n\n");
					}
				}else{
					printf("\nTentando inserir elementos em uma pilha cheia");
					
				}
			break;
			case 2:
				item = pop(pilha);
				if(estado){
					printf("\n Pilha apos retirada");
					mostrar(pilha);
				}else{
					printf("\nTentando retirar elementos de pilha vazia");
				}
			break;
			default:
				printf("\nFim da execução");
		}
		
	}while(ch != 3);
	
}
	
