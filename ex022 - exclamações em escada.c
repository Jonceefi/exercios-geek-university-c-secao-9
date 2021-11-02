//Programa para imprimir exclamções em escada
#include<stdio.h>

void exclama(int);

int main(int argc, char** argv)
{
	int n;
	printf("Digtie um número:\n");
	scanf("%d",&n);
	
	exclama(n);
	return 0;
}

void exclama(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("!");
		}
		printf("\n");
	}
}