/*Preenchendo um vetor com valores aleat�rios e n�o repetidos*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h> /* Biblioteca para n�mero aleat�rios*/

void preenche (int *n);

int main()
{
	int n[4],i;
	
	preenche(n);
	
	for(i=0;i<4;i++) 
	{
		printf("[%d]",n[i]);
	}
	
	return 0;
}

void preenche (int *n)
{
	int i,j,g;
	/*Fun��o p/ limpar n�meros aleat�rio gerados em execu��es anteriores*/
	srand(time(NULL));
	/*Funcionamento em etapas*/
	for(i=0;i<4;i++)
	{
		/*Gerando n�mero aleat�rio*/
		g = rand() % 4;
			/*verificando se o n�mero gerado ja existe no vetor*/
			for(j=0;j<=i;j++)
			{
				/*Se existe, gera-se um novo e faz-se a vericavica��o desde o
				inicio para saber se o n�mero gerado n�o j� foi inserido em 
				outras posi��es tambem*/
				if(n[j] == g)
				{
					g = rand() % 4;
					/*Atribu�mos -1 a j para voltarmos refazermos a leitura do
					vetor novamente do 0*/
					j = -1;
				}		   	   	
			}
			/*Se n�o existe n[i] = recebe o valor gerado*/
		n[i] = g;	
	}
}