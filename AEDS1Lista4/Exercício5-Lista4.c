    /*Esse programa terá uma função recursiva que calcula o valor de S da série a seguir para n > 0:
    S = 1/1! + 1/2! + 1/3! + ...+1 /N!
        double serie (int n)
    O programa principal lerá um número, acionará a função e exibirá o resultado gerado. */
//Autor: Rubens Castro
//Data de criação: 28/09/2021
//última atualização: 30/09/2021

#include<stdio.h>
#include<math.h>

//função 'calculafatorial' (vai calcular o fatorial e acionar outra função)
int calculaFatorial(int N)
{
    //condicional para cálculo do fatorial pela recursividade
    if(N > 0)
    {
        return (N*calculaFatorial(N-1));
    }
    else
    {
        return(1);
    }

}//fim da função 'calculaFatorial'

//função 'serie' (vai calcular o valor de S)
double serie (int n)
{
    double S = 0;//valor da soma

    //condicional para acionar recursividade e calcular 'S' a partir do acionamento da função 'calculaFatorial'
    if(n > 0)
    {
        S = pow(calculaFatorial(n), -1) + serie (n - 1);
        
        return (S);
    }
    else
    {
        return (0);
    }

}//fim da função 'serie'


int main()
{
    int N;//valor de 'N'

    //Leitura
    printf("Digite um número: ");
    scanf("%d",&N);

    //saída com o valor retornada pela função 'serie'
    printf("O valor da equação é %.2lf\n",serie(N));
    return 0;
}
