// Criado por Adão Raul <adao.raul@terra.com.br>
// header padrão
#include <stdio.h>

// inicio da função principal
main()
{
	// declaração de variaveis
  int i,termos,*num;
	
	// capturar numero de termos a ser ordenados
  printf("Numero de termos: ");
	scanf("%d",&termos);
  termos = termos + 1;

  // alocando memoria
  num = (int *) malloc(termos * sizeof(int));

	// capturando os termos
  for (i = 1;i < termos;i++)
	{
		printf("Numero %d: ",i);
		
	}
	
  // chama a função ordem();
  ordem(num,termos);

	// exibe os termos ordenados
  for (i = 1;i < termos;i++)
	{
		printf("%d\n",num[i]);
	}

}

//Função que ordena o vetor
int ordem(int *num, int termos)
{
  int i,j,tmp;

  // percorre o vetor
  for (i = 1;i < termos;i++)
	{		
		for (j = i + 1;j < termos;j++)
		{
			// faz a troca dos termos
      if (num[i] > num[j])
			{
				tmp = num[i];
				num[i] = num[j];
        num[j] = tmp;
			}						
		}
	}
}
