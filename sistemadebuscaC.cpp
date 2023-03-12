#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vetorA[10];
	int i, find, search;
	for (i=0;i<10;i++)
	{
		printf("Digite o %d elemento:",i);
		scanf("%d", &vetorA[i]);
	}
	printf("Informe o elemento que deseja buscar:");
	scanf("%d", &search);
	i = 0;
	find = 0;
	while ((find == 0) && (i <10))
	{
		if (vetorA[i] == search)
		{
			find= 1;
		}
		else
		{
			i++;
		}
	}
	if (find == 1)
	  printf ("O elemento %d foi encontrado na posicao %d.", search, i);
      else
	    printf("O elemento nao foi encontrado.");
	    return (0);
}
