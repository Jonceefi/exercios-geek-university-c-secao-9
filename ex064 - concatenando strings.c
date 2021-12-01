/*Program that does string concatenation*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void concatena(char *vet1,char *vet2);

int main()
{
	char vet1[100], vet2[100];
	printf("Digite a primeira string:\n");
	scanf("%[^\n]s",vet1);

	fflush(stdin);

	printf("Digite a segunda string:\n");
	scanf("%[^\n]s",vet2);

	concatena(vet1,vet2);

	system("Pause");
	return 0;
}

void concatena(char *vet1,char *vet2)
{
	/*  The principle this function is basede in save the size the
		two strings already typed.  */
	int tamVet1, tamVet2,tam,i;
		tamVet1 = strlen(vet1);
		tamVet2 = strlen(vet2);
		tam = tamVet1 + tamVet2;
	char vet3[tam];
	/* here you start using size the frist string */
	for(i=0;i<tamVet1;i++)
	{
		vet3[i] = vet1[i];
	}
	/* afther you continue using the size the frist string most size the second string*/
	for(i=0;i<tamVet2;i++)
	{
		vet3[i+tamVet1] = vet2[i];
	}
	/*print the new string concatened*/
	for(i=0;i<tam;i++)
	{
		printf("%c",vet3[i]);
	}
	printf("\n");
}