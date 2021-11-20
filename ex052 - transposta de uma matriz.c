/*Programa que caucula a soma da diagonal principal de uma matriz*/
#include<stdio.h>

void transposta(int matriz[3][3]);

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
	printf("\nMatriz normal:\n");
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++)
		{
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}
	transposta(matriz);
	
	return 0;
}
/*Função que imprime a trasposta de uma matriz*/
void transposta(int matriz[3][3])
{
	printf("\nTransposta:\n");
	int i,j;
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++)
		{
			printf("[%d]",matriz[j][i]);
		}
		printf("\n");
	}

}