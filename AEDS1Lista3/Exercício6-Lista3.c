    /*Esse programa terá uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o
    valor de S, calculado segundo a fórmula abaixo.
    S = 1 + 1/1! + 1/2! + 1/3! + ...+1 /N!
    O programa vai ler N e imprimir o valor retornado pela função. */
//Autor: Rubens Castro
//Data de criação:20/09/2021
//última atualização:21/09/2021

#include<stdio.h>
#include<math.h>

//função 'calculo'
double calculo (int N)
{
    int i, //variável de controle da repetição
    control=0; // variável de apoio para cálculo do fatorial
    double S=1,//soma total 
    fat=1;//usada para cálculo do fatorial

    //repetição para cálculo das parcelas
    for(i=1;i<=N;i++)
    {
        //soma +1 em contador para cálculo de cada fatorial posterior
        control++;

        //cálculo de cada termo;
        fat=fat*control;

        //cálculo da soma total 
        S=S+pow(fat,-1);

    }//fim da repetição

    //valor retornado='S'
    return(S);

}//fim da função 'calculo'

int main()
{
    int n; // valor de parcelas

    //Leitura do valor de N
    printf("Digite o valor de 'N' para cálculo: ");
    scanf("%d",&n);

    //saída com o valor retornado pela função 'calculo'
    printf("O valor da soma 'S' é %.2lf \n",calculo(n));

    printf("Fim do programa. \n");

    return 0;
}