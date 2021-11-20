/*	Programa que caucula o triângulo inferior de uma matriz 3x3*/
#include<stdio.h>

void abdiagonal(int matriz[3][3]);

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
	abdiagonal(matriz);
	
	return 0;
}
/*Função que faz a soma dos números que compões o triângulo
inferior da matriz*/
void abdiagonal(int matriz[3][3])
{
	int i,j,soma=0;
	for(i=0;i<3;i++) 
	{	
		for(j=0;j<3;++j)
		{
			if ((i+j) >= 3)
			{
				/*Segredo da função:
				  Se a soma de coluna com a linha for maior ou igual a 3,
				  no caso de matrizes 3x3, guarde o valor e some com o valor
				  anterior. */
				soma = soma + matriz[i][j];	
			}
				
		}
	}
	//Imprima na tela e retorne o programa.
	printf("\nA soma dos numeros que compoe o triangulo inferior vale: %d",soma);
}