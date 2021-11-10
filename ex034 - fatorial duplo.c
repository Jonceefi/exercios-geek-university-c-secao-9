//Fatorial Duplo
#include<stdio.h>

void fatorial_duplo (int num);

int main()
{
	int n;
	printf("Digite um n�mero impar");
	scanf("%d",&n);
	
		if(n%2 == 0)
		{
			while(n%2 == 0)
			{
			     printf("!!! O numero digitato deve ser impar!!!");
				 scanf("%d",&n);	   	   	
			}
		}
	fatorial_duplo(n);
				
	return 0;
}

/*Fatorial Duplo o funcionamento � o seguinte:

1- i para ser o contador b�sico de C s� que somando de 2 em 2 para
   multiplicar apenas os impares; 
2- j para receber/guardar essa multiplica��o de i pelo valor 
   anterior de i;
3- auxiliar para guardar o valor anterior de i para ser usado no 
   procedimento j;   	
*/

void fatorial_duplo(int num)
{
	int i,j,aux =1;
	   for(i=1;i<=num;i+=2)
	   {
	   	   j = i*aux; 	    	
		   aux = i;
	   }	
	printf("%d",j); 
}