#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int eh_anagrama(char* str1,char* str2);

int main()
{
	char str1[21],str2[21];
	int anagr;

	printf("+OPERADOR DE ANAGRAMAS+\n");

	printf("Digite a primeira palavra:\n");
	scanf("%[^\n]s",str1);

	fflush(stdin);/*função que limpa o buffer do teclado*/

	printf("Digite a segunda palavra:\n");
	scanf("%[^\n]s",str2);

	anagr = eh_anagrama(str1,str2);

	if(anagr == 0)
	{
		printf("Eh anagrama");
		system("pause");
		return 0;
	}
	else
		printf("NAO eh anagrama");
		system("pause");
		return 0;
}		

int eh_anagrama(char* str1,char* str2)
{		
	int i,j,k,tamStr1,tamStr2;
	int contStr1, contStr2;

	tamStr1 = strlen(str1);/*Faz a leitura do tamanho da string - quantos caracteres.*/
	tamStr2 = strlen(str2);/*Faz a leitura do tamanho da string - quantos caracteres.*/

	if((tamStr1 != tamStr2) || (strcmp(str1,str2) == 0)) /*função que retorna o tamanho de duas strings*/
		{
			return -1;	
		}

	for(i=0;i<tamStr1;i++)
	{
		contStr1 = 0;
		contStr2 = 0;
		for(j=0;j<tamStr1;j++)
		{
			if(str1[i] == str1[j])
			{	
				contStr1++;
			}
		}		
		for(k=0;k<tamStr2;k++)
		{	
			if(str1[i] == str2[k])
			{
				contStr2++;
			}
		}
		if(contStr1 != contStr2)
		{
			return -1;	
		}
	}	
	return 0;
}