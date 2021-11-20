#include<stdio.h>
#include<stdlib.h>

void imprime(float* numeros);
void inversa(float* numeros);
void media(float* numeros);
int main()
{
	float numeros[4];
	int i;
	
	for(i=0;i<4;i++) 
	{
		printf("Digite o %d valor:",i);
		scanf("%f",&numeros[i]);
	}
	
	imprime(numeros);
	inversa(numeros);
	media(numeros);
	
	return 0;
}
void imprime(float* numeros)
{
	int i;
	printf("\nVetor:");
	for(i=0;i<4;i++) 
	{
		printf("[%.2f]",numeros[i]);
	}
}
void inversa(float* numeros)
{
	int i;
	printf("\nVetor inverso:");
	for(i=3;i>-1;i--) 
	{
		printf("[%.2f]",numeros[i]);
	}
}
void media(float *numeros)
{
	int i;
	float m,s=0;
	//For para somar a todos e guardar esta em S.
	for(i=0;i<=4;i++)
	{
		s += numeros[i];
	}
	//M faz a média dos valores guardados em S.
	m = s/4;
	printf("\nMedia aritimetica eh: %.2f",m);
}