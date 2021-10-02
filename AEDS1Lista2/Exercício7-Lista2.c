   /*Esse programa vai imprimir os L primeiros elementos da série de Fibonacci. Por
    exemplo, se o usuário digitou o número 40, deverão ser apresentados os 40 números da
    sequência na tela.*/
//Autor: Rubens Castro
//Data de criação: 12/09/2021
//última atualização: 14/09/2021

#include<stdio.h>
#include<math.h>

int main(void)
{
    //declaração de variáveis(L=total de termos da sequencia a serem mostrados / control=variável de controle da repetição / sequencia=valor inicial da sequencia para cálculo dos próximos termos / sequencia2=valor dos próximos termos da sequencia /aux=variável para ajuda no cálculo dos termos)
    int L, control, sequencia=0, sequencia2=1, aux;

    //Mensagem inicial e leitura do valor de L
    printf("Quantos números da série de Fibonacci você quer ver? ");
    scanf("%d", &L);

    //Mensagem com o primeiro e segundo termo
    printf("%d, ", sequencia);
    printf("%d, ",sequencia2);

    //repetição para definição de cada próximo termo
    for(control=3;control<=L;control++)
    {
        //aux guarda o valor inicial da sequencia de "sequencia2"
        aux=sequencia2;

        //cálculo do próximo termo
        sequencia2=sequencia2+sequencia;

        //saída do próximo termo
        printf("%d, ", sequencia2);
        
        //sequencia recebe o valor inicial da repetição de sequencia2 para cálculo do próximo termo
        sequencia=aux;
        
    }

    return 0;
}