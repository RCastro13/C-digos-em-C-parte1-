  /*Esse programa terá uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o
  valor de S, calculado segundo a fórmula abaixo.
  S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3)
  O programa vai ler N e imprimir o valor retornado pela função. */
//Autor: Rubens Castro
//Data de criação:20/09/2021
//última atualização:21/09/2021

#include<stdio.h>
#include<math.h>

//função calculo
double calculo(N)
{
    int i;//variável de controle e uso para cálculo das parcelas
    double S=0,//valor total da fórmula do enunciado
           denominador,//denominador da parcela
           numerador;//numerador da parcela

    //repetição para definição de cada parcela e sua soma em 'S'
    for(i=1;i<=N;i++)
    {
      //cálculo de 'S'
      numerador=i*i+1;
      denominador=i+3;
      S=S+numerador/denominador;

    }//fim da repetição

    //valor retornado 'S'
    return (S);

}//fim da função 'calculo'

int main()
{
    double n;//valor de N para cálculo da fórmula do enunciado
    
    //Leitura do valor de 'N'
    printf("Digite o valor de 'N' para cálculo: ");
    scanf("%lf",&n);

    //saída com o valor 'S' calculado pela função;
    printf("O valor de 'S' é %.2lf. \n",calculo(n));

    printf("Fim do programa. \n");
    return 0;
}