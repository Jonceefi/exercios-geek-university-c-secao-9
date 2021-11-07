#include<stdio.h>
#include "facSum.h"

int main()
{
    int n,s,f;
    printf("Digite um numero:\n");
    scanf("%d",&n);

    f = fac(n);
    printf("\n%d",f);
    s = soma(f);


    printf("\n A soma do(s) algarismo(s) de %d é igual a %d.",f,s);

    return 0;
}
