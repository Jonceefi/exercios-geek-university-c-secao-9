 // Programa que verifica se certa matriz � identidade
#include<stdio.h>

int ordem(int* n);//Essa fun��o l� o n�mero da matriz para fazer a transposta;
int identidade(int n, int matriz[n][n]);// Essa faz a trasnposta everifica se a mesma � identidade;  

int main(int argc, char** argv)
{
	int n,i,j,id;
	//recebendo a ordem da matriz 
	n = ordem(&n);
	int matriz[n][n];
	//lendo matriz[3][3]
		for(i=0;i<n;i++) 
		{
			for(j=0;j<n;j++)
			{
				printf("Matriz[%d][%d]:",i+1,j+1);
				scanf("%d",&matriz[i][j]);
			}
		}
	//verificando se � identidade:
	id = identidade(n,matriz);
	
		if(id == 0)
		{
			printf("A matriz NAO eh identidade.");
		}
		else
		{
			printf("A matriz EH identidade de ordem %d.",n);
		}
	return 0;	
}
/*Verifica se a ordem � v�lida:*/ 
int ordem(int* n)
{
	/*  No caso desta coloquei um limite de ate 5 devido ao preenchimento
		manual.  */
	int o;
	printf("Digite um numero para fazermos a identidade:");
	scanf("%d",&o);
		if (o > 5)
		{
			while(o > 5) 
			{
				printf("!ATENCAO! o numero digitado deve estar entre 1 e 5! ");
				scanf("%d",&o);
			}
		}	
		if (o < 1)
		{
			while(o < 1) 
			{
				printf("!ATENCAO! o numero digitado deve estar entre 1 e 5! ");
				scanf("%d",&o);
			}
		}	
	return o;	   	
}
//Verifica se � identidade
int identidade(int n,int matriz[n][n])
{
	/*  O princ�pio da fun��o consistem em analizar se: Quando os n�meros
	das linhas e colunas s�o iguais, apresentam 1, e, quando diferentes, 
	apresentam 0. */
	int i,j;
	for(i=0;i<n;i++) 
	{
		for(j=0;j<n;j++)
		{
			if(i == j)
			{
				if(matriz[i][j] != 1)
				{
					   	return 0;
				}				 			 			
			}
			else if(i != j)
			{
				if(matriz[i][j] != 0)
				{
					return 0;
				}	   	   	
			}
	   	}
   	}
	   	return 1;
}	   