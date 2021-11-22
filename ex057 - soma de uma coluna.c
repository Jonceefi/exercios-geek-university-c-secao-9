/*Programa que calcula a soma de uma coluna N*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h> /* Biblioteca para número aleatórios*/

void preenche(int matriz[][6]);
void soma(int num, int matriz[][6]);

int main(void)
{
	int i,j,n,matriz[7][6];	
	
	preenche(matriz);
	
	printf("Esta eh a matriz, escolha um coluna para a soma:");
	scanf("%d",&n);

	soma(n,matriz);

	system("pause");
	return 0;	
}
/*Função para integrar valores a matriz*/
void preenche(int matriz[][6])
{
	int i,j;
	srand(time(NULL));
	for(i=0;i<7;i++)
	{
		for(j=0;j<6;j++)
		{
			matriz[i][j] = rand()%9;
			printf("[%d]",matriz[i][j]);
		}
		printf("\n");
	}

}
/*Função para somar uma coluna N*/
void soma(int num, int matriz[][6])
{
	int i,j,s=0;
	/*Função responsável por verificar se o número digitado não eh inválido:*/
	if(num < 1 || num > 6)
	{
		do
		{
			printf("O numero deve ser entre 1 e 6 para esta matriz, digite novamente!");
			scanf("%d",&num);
		}while(num < 1 || num > 6);
	}
	/*Função responsável por guardar a soma dos números da coluna N*/
	num = num-1;
	for(i=0;i<7;i++)
	{
		for(j=0;j<6;j++)
		{
			if(j == num)
			{
				s += matriz[i][j];
			}
		}
	}
	/*Print na tela do valor encontrado*/
	printf("\nA soma dos numeros da coluna [%d] = [%d]\n",num+1,s);
}