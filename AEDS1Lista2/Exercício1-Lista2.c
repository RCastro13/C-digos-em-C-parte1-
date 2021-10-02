    /*Esse programa vai ler uma sequência de valores inteiros fornecida pelo usuário em uma
    linha de entrada e contar o número de valores positivos, negativos e zeros. */
//Autor: Rubens Castro
//Data de criação: 05/09/2021
//última atualização: 13/09/2021

#include<stdio.h>

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
    printf("O total de números positivos é %d. \n", positivos);
    printf("O total de números negativos é %d. \n", negativos);
    printf("O total de zeros é %d.", zeros);

    return 0;
}