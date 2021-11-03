//Alterando função com ponteiro:
#include<stdio.h>

//A função deve receber o endereço dos vetores. 
void simplificador(int *n,int *d);

int main()
{
	int n,d;
	
	printf("Digite digite a fracao: \nNumerador:");
	scanf("%d",&n);
	printf("Denomidador:");
	scanf("%d",&d);
	//O endereço dos valores é passado para que possa ser alterado.
	simplificador(&n,&d);
	
	printf("[%d]\n---\n[%d]",n,d);
	return 0;
}

void simplificador (int *n, int *d)
{
	/*  Aqui criamos uma variável (i) que recebe o valor do numerador (n) 
		com decrescimento após o fim do FOR, ao encontrar um valor que o
		divida em partes iguais, passamos para um próximo condicional pa-
		ra verificar se aquele também divide o denomidador, se sim, alte-
		ra-se os valores e retorna-se ao programa.      	
	*/
	int i,div;
	int tru = 0;
		// Usamos (tru) para sair do loop assim que encontrada;
		for(i=*n;tru !=1 ;i--)
		{
			if(*n%i == 0)
			{
				if(*d%i == 0)
				{
					div = i;
					tru = 1;
					*n = *n/div;  
					*d = *d/div;
				}
			}
		}
		if (tru = 0)
		{
			div = 1;
		}
	*n = *n/div; 
	*d = *d/div;	
	return;
}