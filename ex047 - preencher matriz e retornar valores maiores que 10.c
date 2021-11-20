#include<stdio.h>
#include<stdlib.h>

int maiorqdez(int* matriz[2][2]);

int main()
{
	int matriz[2][2],j,i;
	int maior;
	
	printf("Digite os valores para matriz:\n");
	for(i=0;i<2;i++) 
	{
		for(j=0;j<2;j++)
		{
			
			printf("Matriz[%d][%d]:",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	maior = maiorqdez(matriz);
	printf("Os maiores que dez sao: %d",maior);
	
	return 0;
}	
int maiorqdez(int* matriz[2][2])
{	
	int i,j,m=0;
	for(i=0;i<2;i++) 
	{
		for(j=0;j<2;j++)
		{
			if (matriz[i][j] > 10)
			{
				m++;
			}
		}
	}
	return m;
}