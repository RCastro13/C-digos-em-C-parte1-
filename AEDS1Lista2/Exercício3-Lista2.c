     /*Esse programa vai receber dez números e verificar se eles são divisíveis por 3 e 9 (ao
    mesmo tempo), por 2 e por 5. Caso algum número não seja divisível por nenhum desses
    números a mensagem “Número não é divisível pelos valores” será mostrada. No final, serão contados a quantidade 
    de números divisíveis por 3 e 9, por 2 e por 5. */
//Autor: Rubens Castro
//Data de criação:12/09/2021
//Última atualização:14/09/2021

#include<stdio.h>
#include<math.h>

int main(void)
{
    //declaração de variáveis (num=10 números digitados / control=variável de controle da repetição / divTresNove,divDois,divCinco=total de números que dividem por 3 e 9; 2 e 5 respectivamente)
    int num, control, divTresNove=0, divDois=0, divCinco=0;

    //repetição para receber os 10 números diferentes
    for(control=1;control<=10;control++)
    {

    //Mensagem inicial e leitura de cada número inserido
    printf("Digite 10 números (digite 1 número por vez): ");
    scanf("%d", &num);

        //condicional para definição se o número é divisível pelos números pedidos no enunciado ou não
        if(num%3==0 && num%9==0)
        {
            divTresNove++;  
        
        }
        
        if(num%5==0)
        {
            divCinco++;
        }
        if(num%2==0)
        {
            divDois++;
        }
        
        if(num%3!=0 && num%9!=0 && num%5!=0 && num%2!=0 )
        {
            //caso o número não seja divisível por 3 e 9;2 e 5, receberá essa mensagem
            printf("Número não divisível pelos valores. \n");
        }

    }//fim da repetição

    //saída com o pedido do enunciado
    printf("O total de números divisíveis por 3 e 9 ao mesmo tempo é: %d \n", divTresNove);
    printf("O total de números divisíveis por 5 é: %d \n", divCinco);
    printf("O total de números divisíveis por 2 é: %d \n", divDois);

    return 0;
}