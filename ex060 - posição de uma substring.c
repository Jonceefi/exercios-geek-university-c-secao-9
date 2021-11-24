#include<stdio.h>
#include<stdlib.h>

int ver(char* cliente, char* string);

int main()
{
	char string[1], cliente[27] = "abcdefghijklmnopqrstuvwxyz";
	int resp; 
	printf("Digite o caracterer desejado: ");
	scanf("%s",string);
	
	resp = ver(cliente,string);
	
		if(resp != -1)
			printf("A posicao de (%s) eh (%d)",string, resp);
		else
			printf("!O caractere informado não existe!");
	
	system("pause");
	return 0;
	
}
int ver(char* cliente, char* string)
{
	int i;
	for(i=0;i<27;i++)
	{
		if(cliente[i] == string[0])
		{
			return i;
		}
	}
	return -1;
}	