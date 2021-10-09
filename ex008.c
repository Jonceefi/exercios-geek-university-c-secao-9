#include<stdio.h>
#include<math.h>

float hipo(int x,int y);

int main()
{
    int a,b;
    float h;
    printf("Achando-a-Hipotenusa:");
    printf("\nDigite o cateto A: ");
    scanf("%d",&a);
    printf("Digite o cateto B: ");
    scanf("%d",&b);

    h = hipo(a,b);

    printf("A hipotenusa do triangulo vale %.1f",h);
    return 0;
}

float hipo(int x,int y)
{
    float h;
    x = x*x;
    y = y*y;
    h = sqrt(x+y);
    return h;
}
