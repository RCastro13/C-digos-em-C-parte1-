    /*Esse programa vai ler um valor n inteiro e positivo e calcular a seguinte soma:
    S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
    O algoritmo vai escrever cada termo gerado e o valor final de S. */
//Autor: Rubens Castro
//Data de criação: 12/09/2021
//última atualização: 13/09/2021

#include<stdio.h>
#include<math.h>

int main(void)
{
    //declaração de variáveis (N=valor digitado para o total de termos / control=variável de controle e cálculo de cada termo / soma=valor total da soma dos termos)
    int N,control;
    double soma=1;

    //Mensagem Inicial e leitua do valor de N;
    printf("Digite um valor positivo inteiro para N: ");
    scanf("%d",&N);

    //Mensagem identificando o primeiro termo 
    printf("O valor do primeiro termo é %lf \n",soma);

    //repetição para definição dos próximos termos até que a variável de controle alcance o valor de N
    for(control=2;control<=N;control++)
    {
        //cálculo da soma
        soma=soma+pow(control,-1);

        //saída do valor de cada próximo termo
        printf("O valor do próximo termo é %lf \n", pow(control,-1));
    
    }//fim da repetição

    //saída com o valor final da soma dos termos
    printf("O valor da soma 'S' é de %lf. \n", soma);

    return 0;
}