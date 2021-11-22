/*Função para somar os números de uma matriz*/
#include<stdio.h>
#include<stdlib.h>

int soma(int matriz[4][4]);

int main()
{
	int matriz[4][4],j,i,sum;
	
	printf("Digite os valores para matriz:\n");
	for(i=0;i<4;i++) 
	{
		for(j=0;j<4;j++)
		{
			
			printf("Matriz[%d][%d]:",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	sum = soma(matriz);

	printf("\nA soma dos numeros vale: %d",sum);
	system("pause\n");
	return 0;
}
/*A função é simples apenas guardamos os valores dela em uma variável
e a retornamos após serem somados todas as variáveis.*/
int soma(int matriz[4][4])
{
	int i,j,sum=0;
	for(i=0;i<4;i++) 
	{
		for(j=0;j<4;j++)
		{
			sum += matriz[i][j];
		}
	}
	return sum;
}	