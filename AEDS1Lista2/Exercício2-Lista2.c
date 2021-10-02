    /* Esse programa vai adaptar o programa do exercício 1 para calcular o percentual dos valores positivos,
    negativos e zeros em relação ao total de valores fornecidos.*/
//Autor: Rubens Castro
//Data de criação: 12/09/2021
//última atualização: 13/09/2021

#include<stdio.h>
#include<math.h>

int main(void)
{

    //declaração de váriaveis(num=número digitado / valor=quantos números o usuário vai digitar em sua sequência / control=variável de controle da repetição / positivos,negativos,zeros=total de números positivos, negativos e zeros)
    int num, valor, control=1, positivos=0, negativos=0, zeros=0;
    
    //Mensagem inicial e leitua de quantos números serão digitados na sequência
    printf("Digite quantos valores você vai digitar: ");
    scanf("%d",&valor);
   
    //repetição para digitar números até alcançar o número digitado anteriormente
    while(control<=valor)
    {
    printf("Digite uma sequencia de valores inteiros: ");
    scanf("%d",&num);
        
        //condicional para definir se o número é positivo, negativo ou zero
        if(num>0)
        {
            positivos++;
        }

        else if(num<0)
        {
            negativos++;
        }

        else
        {
            zeros++;
        }

    control++;
    
    }//fim da repetição
    
    //saídas com o pedido do enunciado
    printf("O percentual de números positivos em relação ao total de números digitados é de %d por cento. \n", (positivos*100)/valor);
    printf("O percentual de números negativos em relação ao total de números digitados é de %d por cento. \n", (negativos*100)/valor);
    printf("O percentual de zeros em relação ao total de números digitados é de %d por cento.", (zeros*100)/valor);

    return 0;
}