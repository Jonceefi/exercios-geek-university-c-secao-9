/*Imprimindo um tri�ngulo
  Neste programa a altura � igual a n (n�mero digitado pelo usu�rio)
  e tamanho igual a:(2*n)-1. 	
*/
#include<stdio.h>

void triangulo(int n);

int main(int argc, char** argv)
{
	int n;
	printf("Digite um numero:\n");
	scanf("%d",&n);
	
	triangulo(n);
	
	return 0;
}
void triangulo(int n)
{
	int i,j,aux;
	aux = n-1;
	/*
		No caso do primeiro for, faz-se o triangulo
		crescer at� N;
	*/
	for(i=1;i<=n;i++)
	{
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
	}
	/*
	   No caso do segundo for, decrescemos apartir de n-1 at� 0;	
	*/
	for(i=aux;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	/*
	   O segredo � interpretar a f�rmula antes de aplicala;	
	*/
}
