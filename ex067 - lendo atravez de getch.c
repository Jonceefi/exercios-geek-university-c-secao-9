#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void complet(char vet[0], int tam);

int main()
{
	char vet[30];
	int tam=30;

	complet(vet,tam);

	system("pause");
	return 0;
}

void complet(char vet[0], int tam)
{
	int i;
	char resp;
	for(i=0;i<tam;i++)
	{
		printf("Digite uma tecla ou 0 para sair i = [%d]: ",i);
		fflush(stdin);
		resp = getchar();
		vet[i] = resp;
			if(resp == '0')
			{
				break;
			}
	}
	tam = i;
	printf("O vetor tem tamanho (%d) e esta preenchido com:\n",tam);
	for(i=0;i<tam;i++)
	{
		printf("%c",vet[i]);
	}

}