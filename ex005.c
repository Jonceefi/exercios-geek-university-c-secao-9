#include<stdio.h>
#include<math.h>

float volume (float x);

int main()
{
    float r;
    printf("Volume da circunferencia (1.0)L:");
    scanf("%f",&r);

    printf("\nO volume da circunferencia %.2f", volume(r));
    return 0;
}

float volume (float x)
{
    float v;
    v = (4/3)*3.14*(x*x*x);
    return v;
}
