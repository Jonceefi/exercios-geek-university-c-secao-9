//Maior fator primo de um número;
#include<stdio.h>

int maior(int n);

int main(int argc, char** argv)
{
	int n,maiorp;
	printf("Digite um número:\n");
	scanf("%d",&n);
	
	maiorp = maior(n);
	
	printf("\nO maior fator primo é [%d]", maiorp);
	
	return 0;
}

int maior(int n)
{
	/*  
		i(procurará em de 2 a te N, os número primos);
		j(fará as divisões para saber se o número i é primo);
		aux(serve como aux para guardar os valores);
		eh_primo(guardará o número primo mais próximo que divide N).
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
			Neste condicional iremos verificar se o número primo divide N.
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