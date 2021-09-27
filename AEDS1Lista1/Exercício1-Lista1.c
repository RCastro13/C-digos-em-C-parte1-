    //Esse programa vai receber dois números e imprimir como resposta o maior deles
//Autor: Rubens Castro
//Data de criação: 02/09/21
//última atualização: 03/09/21

#include <stdio.h>

int main(void)
{
    //declaração das váriveis (num1 e num2=números a serem digitados pelo usuário)
    int num1, num2;

    //Mensagem inicial e "scan" dos 2 números digitados
    printf("Digite dois números: \n");
    scanf("%d %d", &num1, &num2);

    //condição para decidir qual número é o maior
    if(num1>=num2)
    {
        //caso 1: se num1 for maior a mensagem o mostrará como maior
        printf("O maior número é %d", num1);
    }
    else
    {
        //caso 2: se num1 não for o maior, a mensagem mostrará num2
        printf("O maior número é %d", num2);
    }
    
    return 0;
}