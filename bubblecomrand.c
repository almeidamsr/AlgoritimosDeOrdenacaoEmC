#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUBBLE 800
int main()
{
int array[BUBBLE];
int i, j;
int temp = 0;
    
srand(time(NULL));
    
for (i = 0; i < BUBBLE; i ++)
{    
    printf("%d \n",    rand() % BUBBLE + 1);
    
        for (j = 0; j < BUBBLE; j++);
        {
            temp = array[j+1];
            array[j+1] = array[j];
            array[j] = temp;
        }
}
  
  
  system("PAUSE");	
  return 0;
}