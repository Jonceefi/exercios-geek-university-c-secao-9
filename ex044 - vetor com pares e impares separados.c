#include<stdio.h>
#include<stdlib.h>
#include<conio.h> /*Biblioteca para número aleatórios*/

void preenche (int *n,int *par,int *imp);

int main()
{
	int n[4],i,*par,*imp;
	
	preenche(n,par,imp);
		
	return 0;
}

void preenche (int *n,int *par,int *imp)
{
	int i,j,g;
	/*Função p/ limpar números aleatório gerados em execuções anteriores*/
	srand(time(NULL));
	/*Funcionamento em etapas*/
	for(i=0;i<4;i++)
	{
		/*Gerando número aleatório*/
		g = rand() % 15;
			/*verificando se o número gerado ja existe no vetor*/
			for(j=0;j<=i;j++)
			{
				/*Se existe, gera-se um novo e faz-se a vericavicação desde o
				inicio para saber se o número gerado não já foi inserido em 
				outras posições tambem*/
				if(n[j] == g)
				{
					g = rand() % 15;
					/*Atribuímos -1 a j para voltarmos refazermos a leitura do
					vetor novamente do 0*/
					j = -1;
				}		   	   	
			}
		/*Se não existe n[i] = recebe o valor gerado*/
		n[i] = g;
    }		
    
	/*Lendo quando quantos números pares/impares exitem no vetor*/
	
	int auxp=0,auxi =0;
	for(i=0;i<4;i++) 
	{
		if(n[i]%2 == 0)
		{
			auxp++;
		}
		else
		{
			auxi++;
		}
	}
	/*Alocando o os tamonhos de acordo com o existente*/
	
	par = malloc(auxp*sizeof(int));
	imp = malloc(auxi*sizeof(int));
	
	/*guardando os valores em seus respectivos vetores*/
	j=0;
	g=0;
	for(i=0;i<4;i++)
	{
		if(n[i]%2 == 0)
		{
			par[j] = n[i];
			j++;		
		}
		else
		{
			imp[g] = n[i];
			g++;
		}	
	}
	/*Imprimindo os valores na tela*/
	printf("Vetor n:");
	for(i=0;i<4;i++) 
	{
		printf("[%d]",n[i]);
	}
	printf("\nVetor impar:");
	for(i=0;i<auxi;i++) 
	{
		printf("[%d]",imp[i]);
	}
	printf("\nVetor par:");
	for(i=0;i<auxp;i++) 
	{
		printf("[%d]",par[i]);
	}
			
}
