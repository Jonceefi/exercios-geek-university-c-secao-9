//Alterando fun��o com ponteiro:
#include<stdio.h>

//A fun��o deve receber o endere�o dos vetores. 
void simplificador(int *n,int *d);

int main()
{
	int n,d;
	
	printf("Digite digite a fracao: \nNumerador:");
	scanf("%d",&n);
	printf("Denomidador:");
	scanf("%d",&d);
	//O endere�o dos valores � passado para que possa ser alterado.
	simplificador(&n,&d);
	
	printf("[%d]\n---\n[%d]",n,d);
	return 0;
}

void simplificador (int *n, int *d)
{
	/*  Aqui criamos uma vari�vel (i) que recebe o valor do numerador (n) 
		com decrescimento ap�s o fim do FOR, ao encontrar um valor que o
		divida em partes iguais, passamos para um pr�ximo condicional pa-
		ra verificar se aquele tamb�m divide o denomidador, se sim, alte-
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