#include<stdio.h>
#include<stdlib.h>

void tamanho(char *str, int* strzise);

int main()
{
	printf("Medindo uma string\n");
	char str[100];
	int strzise;

	printf("Digite o texto:");
	scanf("%[^\n]s", str);
	fflush(stdin);

	tamanho(str,&strzise);

	system ("pause");
	return 0;
}

void tamanho(char *str, int* strzise)
{
	int i,j;
	for(i=0;j!=1;++i)
	{	
		if(str[i] == NULL)
		{	
			j = 1;
			strzise = i;
			break;
		}		
	}
	printf("A string tem tamanho %d\n",strzise);
}