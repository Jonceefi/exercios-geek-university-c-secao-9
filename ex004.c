#include<stdio.h>
#include<math.h>


int squareperfect(int x);
int main(int argc, char** argv)
{
	int a, r;
	printf("Digite um numero inteiro");
	scanf("%d",&a);
	
	r = squareperfect(a);
	if(r == 1)
	{
		printf("Eh um quadrado perfeito!");
	}
	else
	{
		printf("Nao eh um quadrado perfeito!");
	}
	return 0;
	
}

int squareperfect(int x)
{
	int y,aux;
	y = x%2;
	if( y == 0)
	{	   	
	   aux = sqrt(x);
	   if(aux%2 == 0)
	   {
	   	return 1;
	   }
	   else
	   {
	   	return 0;
	   }
	}
	else 
	{
		aux = x%8;
		if(aux == 1)
		{
			return 1;
		}
		else
		{
			return 0;	
		}
	}
	
}