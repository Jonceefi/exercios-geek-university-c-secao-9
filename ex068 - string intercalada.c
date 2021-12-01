#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void intercalada(char vet1[0], char vet2[0],char vet3[0]);

int main()
{	
	char vet1[100],vet2[100];
	int i,tamStr3;
	printf("Digite a string 1:\n");
	scanf("%[^\n]s",vet1);

	fflush(stdin);

	printf("Digite a string 2:\n");
	scanf("%[^\n]s",vet2);

	tamStr3 = strlen(vet1) + strlen(vet2);

	char vet3[tamStr3];
	
	intercalada(vet1,vet2,vet3);

	for (i=0;i<tamStr3;i++)
	{
		printf("%c",vet3[i]);
	}

	system("pause");
	return 0;
}

void intercalada(char vet1[0], char vet2[0],char vet3[0])
{
	int i,j,k,tamStr3;

	tamStr3 = strlen(vet1) + strlen(vet2);

	j=0;
	k=0;
	for(i = 0; i< tamStr3;i++)
	{
		if(i%2 == 0)
		{
			vet3[i] = vet1[j];
			j++;
		}
		else
		{
			vet3[i] = vet2[k];
			k++;
		}
	}
}
