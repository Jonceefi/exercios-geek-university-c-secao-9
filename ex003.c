#include<stdio.h>

int classe (int x);

int main()
{
	int n;
	printf("-TABELA--VERDADE-\n");
	printf("-NÚMEROS > 0 =  1\n");
	printf("-NÚMEROS < 0 = -1\n");
	printf("-NÚMEROS > 0 =  0\n");
	printf("------------------\n");
	printf("Digite um numero:\n");
	scanf("%d",&n);
	
	printf("VERIFICACAO = %d",classe(n));
		
	return 0;
}

int classe (int x)
{
	if(x > 0)
	{
		return 1;
	}
	else if(x < 0)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}