#include<stdio.h>
#include<math.h>

int segundos(int x, int y,int w);

int main()
{
    int hh,mm,ss,soma;
    printf("=Conversor=de=Segundos=\n");
    printf("Digite o valor da horas: \n");
    scanf("%d",&hh);
    printf("Digite os minutos: \n");
    scanf("%d",&mm);
        while(mm < 0 || mm > 60)
        {
            printf("Valor invalido digite um entre 0 e 60");
            scanf("%d",&mm);
        }
    printf("Digite os segundos: \n");
    scanf("%d",&ss);
        while(ss < 0 || ss > 60)
        {
            printf("Valor invalido digite um entre 0 e 60");
            scanf("%d",&ss);
        }

    soma = segundos(hh,mm,ss);

    printf("[%d:%d:%d] sao %d em segundos",hh,mm,ss,soma);

    return 0;
}

int segundos(int x, int y,int w)
{
    int soma;
    x = x*60*60;
    y = y*60;
    soma = x+y+w;
    return soma;
}
