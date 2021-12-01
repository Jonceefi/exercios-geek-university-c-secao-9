/*Programa que compara suas string e verifica se são iguais*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int iguais(char str1[0],char str2[0]);

int main()
{
	
	char str1[10],str2[10];
	int r;

	printf("Digite a primeira String:\n");
	scanf("%[^\n]s",str1);

	fflush(stdin);/*Limpa buffer do teclado*/

	printf("Digite a segunda String:\n");
	scanf("%[^\n]s",str2);

	r = iguais(str1,str2);

		if(r == 0)
			printf("Iguais\n");
		else
			printf("NAO sao iguas\n");

	system("pause");
	return 0;
}
int iguais(char str1[0],char str2[0])
{
	/*Se o tamanho for menor já retorna -1*/
	if(strlen(str1) != strlen(str2))
	{
		return -1;
	}
	else
	{	
		int i,j,tamStr;
		tamStr = strlen(str1);
		for(i=0; i<tamStr; i++)
		{
			/*Se ualgum dos caracteres for diferente já se retorna o -1*/
			if(str1[i] != str2[i])
			{
				return -1;
			}	
		}
	}
	/*Se passar por todos estas condições é de fato igual*/
	return 0;
}