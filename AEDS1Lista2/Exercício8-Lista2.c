/*Esse programa vai imprimir todos os elementos da série de Fibonacci menores que L*/
//Autor: Rubens Castro
//Data de criação: 12/09/2021
//última atualização:14/09/2021

#include<stdio.h>
#include<math.h>

int main(void)
{
    //declaração de variáveis (L=número para impressão de toda a sequencia menor que ele / sequencia=valor inicial da sequencia para cálculo dos próximos termos / sequencia2=valor dos próximos termos da sequencia / aux=variável para ajuda no cálculo dos termos)
    int L, sequencia=0, sequencia2=1, aux;

    //Mensagem inicial e leitura do valor de L
    printf("Digite um número para mostrar todos os elementos da série Fibonacci menores que ele: ");
    scanf("%d", &L);

    //Mensagem com o primeiro e segundo termo
    printf("%d, ", sequencia);
    printf("%d, ",sequencia2);  

    //repetição para definição de cada próximo termo até o último possível antes de alcançar L
    while(sequencia2<=L)
    {
        //aux guarda o valor inicial da sequencia de "sequencia2"
        aux=sequencia2;

        //cálculo do próximo termo
        sequencia2=sequencia2+sequencia;

        //condicional para determinar se o termo calculado é menor que L
        if(sequencia2<=L)
        {
        //se for menor, mostrar na tela o termo
        printf("%d, ", sequencia2);
        }

        //sequencia recebe o valor inicial da repetição de sequencia2 para cálculo do próximo termo
        sequencia=aux;
    }
    return 0;
}