
	/*Programa que l� um vetor de inteiros e retorna o
	maior n�mero entre eles*/
	
#include<stdio.h>
	
int maior(int *n);

int main()
{
	int n[4],i,nmaior;
	// For para receber os valores;
	for(i=0;i<4;i++) 
	{
		printf("Digite n(%d)",i);
		scanf("%d",&n[i]);
	}
	/*Chamada da fun��o que recebe o vetor e retorna
	o maior n�mero existente nela*/
	nmaior = maior(n);
	printf("\n O maior n�mero no vetor v eh %d",nmaior);
	return 0;
}

int maior(int *n)
{
	int i, j, num_maior;
	/*num_maior guarda o primiero valor existente no vetor,
	dessa forma a vari�vel � iniciada e n�o ocasionar� erros,
	se, por exemplo inici�semos a mesma com 0, se o us��rio
	digitasse apenas n�meros negativos, o retorno seria 0.
	*/
	num_maior = n[0];
	//Inicia a leitura do vetor
	for(i=0;i<4;i++)
	{	
		//Verifica do 1� ao ultimo n�mero qual o maior 
		for(j=0;j<=i;j++)
		{
			if(num_maior < n[j])
			{
				num_maior = n[i];
			}
			else
				continue;											
		}	
	}
	return num_maior;
}		