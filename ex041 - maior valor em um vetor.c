
	/*Programa que lê um vetor de inteiros e retorna o
	maior número entre eles*/
	
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
	/*Chamada da função que recebe o vetor e retorna
	o maior número existente nela*/
	nmaior = maior(n);
	printf("\n O maior número no vetor v eh %d",nmaior);
	return 0;
}

int maior(int *n)
{
	int i, j, num_maior;
	/*num_maior guarda o primiero valor existente no vetor,
	dessa forma a variável é iniciada e não ocasionará erros,
	se, por exemplo iniciásemos a mesma com 0, se o usúário
	digitasse apenas números negativos, o retorno seria 0.
	*/
	num_maior = n[0];
	//Inicia a leitura do vetor
	for(i=0;i<4;i++)
	{	
		//Verifica do 1º ao ultimo número qual o maior 
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