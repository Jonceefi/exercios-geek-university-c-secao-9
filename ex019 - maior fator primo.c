//Maior fator primo de um n�mero;
#include<stdio.h>

int maior(int n);

int main(int argc, char** argv)
{
	int n,maiorp;
	printf("Digite um n�mero:\n");
	scanf("%d",&n);
	
	maiorp = maior(n);
	
	printf("\nO maior fator primo � [%d]", maiorp);
	
	return 0;
}

int maior(int n)
{
	/*  
		i(procurar� em de 2 a te N, os n�mero primos);
		j(far� as divis�es para saber se o n�mero i � primo);
		aux(serve como aux para guardar os valores);
		eh_primo(guardar� o n�mero primo mais pr�ximo que divide N).
	*/
	int i,j,aux, eh_primo;
	int eh_par = 0;
	for(i=2;i<=n;i += 1)
	{
		for(j=1;j<=i;j++)
		{
			aux = i%j;
			if (aux == 0)
			{
				eh_par+=1; 
			}
		}
		/*
			Neste condicional iremos verificar se o n�mero primo divide N.
		*/
		if(eh_par <= 2)
		{
			aux = n%i;
			if(aux == 0)
			{
				eh_primo = i;   	
			} 
		}
		
		eh_par = 0;
	}
	return eh_par;
}