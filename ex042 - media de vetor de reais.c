/*Média de um vetor de reais*/
#include<stdio.h>

float media(float *n);

int main()
{
	int i;
	float n[4], med;
	
	// For para receber os valores;
	for(i=0;i<4;i++) 
	{
		printf("Digite n(%d)",i);
		scanf("%f",&n[i]);
	}
	/*Chamada da função que recebe o vetor e retorna
	a média dos números existente nela*/
	med = media(n);
	
	
	printf("\n A media do vetor v eh %.2f",med);
	return 0;
}

float media(float *n)
{
	int i;
	float m,s=0;
	//For para somar a todos e guardar esta em S.
	for(i=0;i<=4;i++)
	{
		s += n[i];
	}
	//M faz a média dos valores guardados em S.
	m = s/4.0;
	return m;
}