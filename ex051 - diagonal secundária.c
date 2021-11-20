/*Programa que caucula a soma da diagonal principal de uma matriz*/
#include<stdio.h>

void diagonal(int matriz[3][3]);

int main(int argc, char** argv)
{
	int matriz[3][3],i,j;
	//lendo matriz[3][3]
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++)
		{
			
			printf("Matriz[%d][%d]:",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	diagonal(matriz);
	
	return 0;
}
/*Função que faz a soma dos números que compões a diagonal secundária*/
void diagonal(int matriz[3][3])
{
	int i,j,soma=0;
	for(i=0;i<3;i++) 
	{	
		for(j=0;j<3;++j)
		{
			if ((i+j) == 2)
			{
				/*Segredo da função:
				  Se a coluna e linha forem iguais, guarde o valor e some com o 
				  valor anterior. */
				soma = soma + matriz[i][j];	
			}
				
		}
	}
	//Imprima na tela e retorne o programa.
	printf("\nA soma dos numeros da diagonal secundaria eh: %d",soma);
}