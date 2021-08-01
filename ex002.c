#include<stdio.h>

void mesporex (int dd,int mm,int aa);

int main()
{
	int dd,mm,aa;
	printf("Digite o dia:");
	fflush(stdout);
	scanf("%d",&dd);
	printf("Digite o mês");
	fflush(stdout);
	scanf("%d",&mm);
	printf("Digite o ano");
	fflush(stdout);
	scanf("%d",&aa);

	mesporex(dd,mm,aa);

}


void mesporex (int dd, int mm,int aa)
{
	static const char*mes[12] = {"Janeiro","Feveiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
	printf("%d de %s de %d",dd, mes[mm -1 ],aa);

}
