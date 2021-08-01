#include <stdio.h>
#include "ajuda.h"

int main()
{
	mensagem ();
	int a,b,s,m;
	printf("Digite o valor de A: ");
	fflush(stdout);
	scanf("%d",&a);
	printf("\nDigite o valor de B: ");
	fflush(stdout);
	scanf("%d",&b);

	s = soma(a,b);
	m = mult(a,b);

	printf("O valor de %d + %d = %d\n",a,b,s);
	printf("O valor de %d * %d = %d",a,b,m);
	return 0;
}
