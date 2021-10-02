  /*Esse programa vai ler um valor N inteiro e positivo, calcular e escrever o valor
  de E:
  E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!  */
//Autor: Rubens Castro
//Data de criação: 12/09/2021
//última atualização: 13/09/2021

#include<stdio.h>
#include<math.h>

int main(void)
{

  //declaração de variáveis (N=valor total de termos / control=variável de controle da repetição, contador e fatorial=usadas para cálculo do denominador de cada termo / E=valor total da soma)
    int N, control,contador=0;
    double fatorial=1, E=1;

    //Mensagem inicial e leitura do valor de N
    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    //Mensagem com o valor do primeiro termo
    printf("O valor do primeiro termo é %lf \n",E);

    //repetição para definicão de todos os termos até N
    for(control=1;control<=N;control++)
    {
    
    //soma +1 em contador para cálculo de cada fatorial posterior
    contador++;

    //cálculo de cada termo;
    fatorial=fatorial*contador;

    //cálculo da soma total para saída posterior
    E=E+pow(fatorial,-1);

    //saída com o valor de cada termo para melhor visualização
    printf("O valor do próximo termo é %lf \n",pow(fatorial,-1));
    
    }//fim da repetição

    //saída com o pedido do enunciado
    printf("O valor de E é igual a %lf \n", E);

    return 0;
}