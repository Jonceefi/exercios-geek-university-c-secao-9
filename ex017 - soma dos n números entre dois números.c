// soma existente entre dois números
#include <stdio.h>

void soma(int n1, int n2); //função que recebe os números;

int main() {

    int n1, n2;
    printf("Digite dois valores\n");
    scanf("%d %d", &n1, &n2);

    soma(n1,n2);

    return 0;
}

void soma(int n1, int n2)
{
    int aux, i,soma;
    /* neste condicional faz-se uma separação dos valores digitados
      para evitar a redundância de erros com valores negativos */
    if (n1 > n2)
    {
         for(i = n2; i < n1; i++)
         {
             aux = i+1;
             soma = i + aux;
             printf("%d + %d = %d\n",i,aux,soma);
         }
    }
    else if(n2 > n1)
    {
        for(i = n1; i < n2; i++)
        {
            aux = i+1;
            soma = i + aux;
            printf("%d + %d = %d\n",i,aux,soma);
        }
    }
    // caso os valores sejam iguais;
    else
    {
        printf("\nNao ha numeros entre eles!\n");
    }
}

