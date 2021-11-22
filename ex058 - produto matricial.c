#include<stdio.h>
#include<stdlib.h>
#include<conio.h> /* Biblioteca para número aleatórios*/

void ordem(int* n);
void preeche(int n,int a[][n],int b[][n]);
void produto(int n,int a[][n],int b[][n], int c[][n]);

int main(void)
{
	int n,i,j;
	ordem(&n);

	int a[n][n],b[n][n],c[n][n];
	
	preeche(n,a,b);
	produto(n,a,b,c);

	printf("Matriz A:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("[%d]",a[i][j]);
		}
		printf("\n");
	}
	printf("Matriz B:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("[%d]",b[i][j]);
		}
		printf("\n");
	}
	printf("Matriz C:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("[%d]",c[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;	
}
/*Recebe a ordem que será passada as matrizes*/
void ordem(int* n)
{
	printf("Digite a ordem das matrizes:");
	scanf("%d",n);
}
/*Preenche as matrizes de ordem N*/
void preeche(int n,int a[][n],int b[][n])
{
	int i,j;
	/*Vinculada a hora do PC para podermos ter números novas toda vez
	que reiniciarmos o programa*/
	srand(time(NULL)); 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j] = rand()%9;
			b[i][j] = rand()%9;
		}
	}
}
/*Faz o produto das matrizes A e B e vincula a C*/
void produto(int n,int a[][n],int b[][n], int c[][n])
{
	int i,j,g,aux = 0;
	/*Funcionamento: precisamos de mais un contador para c, pois,
	  para o produto matricial, em programação, é linha por culu-
	  na por linha, ou matriz A pela trasposta de B.*/
	for(g=0;g<n;g++)
	{	
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				aux += (a[g][i] * b[j][i]);	
			}
			c[i][g] = aux;
			aux = 0;
		}
	}			
}