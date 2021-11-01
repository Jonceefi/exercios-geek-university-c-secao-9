//Potência de x por z
#include <stdio.h>

void eleva(int x,int z);
int main() {
    int x,z;
    printf("Digite um numero X(primeiro)^z(segundo)");
    scanf("%d %d",&x, &z);

    eleva(x,z);

    return 0;
}
/* O ideal é criarmos uma função que guarde o valor de x assim que iniciarmos, dessa forma assim
   que iniciarmos o 'for' para realizar a multiplicação atribuimos a multiplicação à variável 'aux'.
 */
void eleva(int x, int z)
{
    int i,aux = x;
    for(i=2;i <= z-1; i++)
    {
        aux *= x*x;
    }
    printf("\n(%d)^%d = %d",x,z,aux);
}