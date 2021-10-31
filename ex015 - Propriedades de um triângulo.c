//Programa que indentifica se é triângulo e qual o tipo de triângulo
#include <stdio.h>

float verifica(float); // função que verifica se é < 0;
float eh_trinagulo(float a, float b, float c); //função que verifica se é possivel formar um triângulo
void tipo(float a, float b, float c);//função que retorna o tipo de trângulo

int main() {

    // declaração de variáveis:
    float a,b,c, aux;
    //Atribuição e verificação de valores:
    printf("Digite os valore de A, B e C: do triangulo");
    printf("\na: ");
    scanf("%f",&a);
    verifica(a);
    printf("\nb: ");
    scanf("%f",&b);
    verifica(b);
    printf("\nc: ");
    scanf("%f",&c);
    verifica(b);

    aux = eh_trinagulo( a, b, c);
        if(aux == 0)
        {
            tipo(a, b, c);
        }
        else if (aux == 1)
        {
            return 0;
        }
    return 0;
}

float verifica(float a)
{
    if(a <= 0)
    {
        do {
            printf("Valor invalido, digite um valor > 0:");
            scanf("%f", &a);
        }while(a <= 0);

    }
    return a;
}

float eh_trinagulo(float a, float b, float c)
{
    float aux;
    aux = a + b;
    if (aux <= c)
    {
        printf("\nTriangulo impossivel (a + b < c)");
        return 1;
    }
    aux = a + c;
    if(aux <= b)
    {
        printf("\nTriangulo impossivel (a + c < b)");
        return 1;
    }
    aux = b + c;
    if(aux <= a)
    {
        printf("\nTriangulo impossível (b + c < a)");
        return 1;
    }
    return 0;
}

void tipo(float a, float b, float c)
{
    if (a == b && b == c)
    {
        printf("\nTriangulo équilátero!");
    }
    else if( a != b && b != c)
    {
        printf("\nTriangulo escaleno!");
    }
    else
        printf("\nTriangulo isócles!");

}
