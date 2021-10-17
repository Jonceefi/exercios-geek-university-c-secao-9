int soma (int num)
{
    int i, recebeInteiro, recebeResto, soma=0;
    for(i = 1;num > i;i *= 10 ){}
    i = i/10;
    while(i > 0)
    {
        recebeInteiro = num/i;
        recebeResto = num%i;
        num = recebeResto;
        soma += recebeInteiro;
        i = i/10;
    }

    return soma;
}