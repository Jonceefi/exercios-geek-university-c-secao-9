#include <stdio.h>

void printchar(int);

int main() {

    int n;
    printf("Imprimindo chars \n");
    printf("Digite um valor:\n");

    do
    {
        scanf("%d",&n);
        printchar(n);
        printf("Se desejares parar digite 0 ");

    }while(n != 0);

    return 0;
}

void printchar(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("=");
    }
    printf("\n");

}

