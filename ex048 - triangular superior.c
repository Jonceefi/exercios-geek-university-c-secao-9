/*	Programa que caucula o triângulo superior de uma matriz 3x3*/
#include<stdio.h>

void acdiagonal(int matriz[3][3]);

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
	acdiagonal(matriz);
	
	return 0;
}
/*Função que faz a soma dos números que compões o triângulo
superior da matriz*/
void acdiagonal(int matriz[3][3])
{
	int i,j,soma=0;
	for(i=0;i<3;i++) 
	{	
		for(j=0;j<3;++j)
		{
			if ((i+j) <= 1)
			{
				/*Segredo da função:
				  Se a soma de coluna com a linha for menor ou igual a 1,
				  no caso de matrizes 3x3, guarde o valor e some com o valor
				  anterior. */
				soma = soma + matriz[i][j];	
			}
				
		}
	}
	//Imprima na tela e retorne o programa.
	printf("A soma dos numeros do triangulo superior vale: %d",soma);
}