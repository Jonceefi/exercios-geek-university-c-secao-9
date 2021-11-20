/*Preenchendo um vetor com valores aleatórios e não repetidos*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h> /* Biblioteca para número aleatórios*/

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
	/*Função p/ limpar números aleatório gerados em execuções anteriores*/
	srand(time(NULL));
	/*Funcionamento em etapas*/
	for(i=0;i<4;i++)
	{
		/*Gerando número aleatório*/
		g = rand() % 4;
			/*verificando se o número gerado ja existe no vetor*/
			for(j=0;j<=i;j++)
			{
				/*Se existe, gera-se um novo e faz-se a vericavicação desde o
				inicio para saber se o número gerado não já foi inserido em 
				outras posições tambem*/
				if(n[j] == g)
				{
					g = rand() % 4;
					/*Atribuímos -1 a j para voltarmos refazermos a leitura do
					vetor novamente do 0*/
					j = -1;
				}		   	   	
			}
			/*Se não existe n[i] = recebe o valor gerado*/
		n[i] = g;	
	}
}