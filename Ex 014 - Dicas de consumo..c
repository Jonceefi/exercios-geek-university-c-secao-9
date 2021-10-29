// Programa que mede o consumo:
#include <stdio.h>
#include<stdlib.h>

void consumo(float,float); //cabeçalho da função

int main(int argc, char** argv)
{
	float n1,n2,cons;
	printf("Digite a distância:\n");
	scanf("%f",&n1);
	printf("Digite os litros conumidos no percurso:\n");
	scanf("%f",&n2);
	
	consumo(n1,n2); 
	
	return 0;
}

void consumo(float n1, float n2) 
{
	float cons;
	//Fazendo o consumo médio do veículo:
	cons = (n1/n2);
	//Condicional para às dicas:
	if (cons < 8)
		printf("\nVenda esse carro!\n");		 
	else if (cons >= 8 && cons <= 14)
	{
		printf("\nEconômico!\n");
	}
	else
		printf("\nSuper Econômico!!!\n");
}

