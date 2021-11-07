//Função que soma do número gerado pelo fatorial
int soma(int n)
{
    int i, recebeInteiro, recebeResto, soma=0;

    /*
	   O princípio da função é: i começa de 1 e receberá
	   um incremento de x10 enqunato for menor que o nú-
	   mero gerado pelo fatorial(nesse caso a variável N).
    */
    for(i = 1;n > i;i *= 10 ){}
    i = i/10;
    /*
	   Seguindo, precisará-se de dois auxíliares, RecebeInteiro
	   que receberá a disão de N/i - esse número será 10x menor
	   que ele mesmo e será atribuído a N novamente mais tarde,
	   além daquela, precisaremos de uma para receber o resto,
	   recebeResto que será responsável pela soma dos algarimos
	   de N, ainda no final, tem-se a divisão de i por 10, para
	   que reduza de forma proporcional a N e também dê fim ao
	   laço.
    */
    while(i > 0)
    {
        recebeInteiro = n/i;
        recebeResto = n%i;
        n = recebeResto;
        soma += recebeInteiro;
        i = i/10;
    }
    return soma;
}
//função para obter o fatorial
int fac(int n)
{
    /*
       Precisa-se de 3 variáveis i(contador padrão), aux(auxiliar
       em guardar o valor para n) e j(manter n imutável para i ter
       condição de parada).
     */
    int i,aux,j;
    j = n;
        for (i = 2; i < j; i++)
        {
            aux = n * i;
            n = aux;
        }
    return n;
}