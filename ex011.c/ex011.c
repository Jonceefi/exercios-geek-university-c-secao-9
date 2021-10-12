#include <stdio.h>
#include "medias.h"
int main(void) {
    char op;
    int cond = 1;
    float num1,num2,num3;
    float marit, mpond;

    printf("------------------------\n");
    printf("Calculadora de notas:\n");
    printf("N - Digitar as notas:\n");
    printf("A - Media aritimetica:\n");
    printf("P - Media ponderada:\n");
    printf("E - sair:\n");
    printf("------------------------\n");
    printf("\nDigite a operacao desejada:");
    scanf("%c",&op);
    while(cond != 0)
    {
            if (op == 'N' || op == 'n')
            {
                printf("Digite os valores para: nota 1 (espaco) nota 2 (espaco) nota 3");
                scanf("%f %f %f", &num1, &num2, &num3);
            }
            else if (op == 'A' || op == 'a')
            {
                marit = arit(num1, num2, num3);
                printf("A media aritimetica das notas e de: %.1f", marit);
            }
            else if (op == 'P' || op == 'p')
            {
                mpond = pond(num1, num2, num3);
                printf("A media ponderada das notas e de: %.1f", mpond);
            }
            else if (op == 'E' || op == 'e')
            {
                cond = 0;
            }
        printf("\nDigite a operacao desejada:");
        scanf("%c",&op);
    };
    return 0;
}
