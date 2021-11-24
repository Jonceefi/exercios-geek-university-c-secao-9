/*Programa que traz a soma de dois vetores de inteiros*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h> /*Biblioteca para número aleatórios*/

void preenche (int* a,int* b,int* c);
int main()
{
	int a[10],b[10],c[10];
	
	preenche(a,b,c);

	system("pause");	
	return 0;
}
void preenche (int* a,int* b,int* c)
{
	int i;
	srand(time(NULL));
	/*Atribui valores aleatórios aos vetores*/
	for(i=0;i<10;i++)
	{
		a[i] = rand()%10;
		b[i] = rand()%10;
		c[i] = a[i] + b[i];
	}
	printf("\nVetor A:");
	for(i=0; i<10;i++)
	{	
		printf("[%d]",a[i]);
	}
	printf("\nVetor B:");
	for(i=0; i<10;i++)
	{	
		printf("[%d]",b[i]);
	}
	printf("\nSoma de A + B:");
	printf("\nVetor C:");
	for(i=0; i<10;i++)
	{	
		printf("[%d]",c[i]);
	}			
}