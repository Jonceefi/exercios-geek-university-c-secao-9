#include <stdio.h>

int soma (int x, int y);

int main ()
{
	int a,b,res;
	printf("Digite um valor o valor de a:");
	fflush(stdout);
	scanf("%d",&a);
	printf("\nDigite o valor de b: ");
	fflush(stdout);
	scanf("%d",&b);
	res = soma(a,b);

	printf("\nA soma de %d + %d = %d",a,b,res);
	return 0;
}

int soma(int x, int y)
{
	return x + y;
}
