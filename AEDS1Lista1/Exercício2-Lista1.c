    /*Esse programa lerá 2 números inteiros e somá-los. Se o resultado for maior ou igual a 10,
    soma-se 5 a este número. Caso contrário soma-se 7 a ele. Depois imprimir o resultado final*/
//Autor: Rubens Castro
//Data de Criação: 03/09/21
//última atualização: 03/09/21

#include <stdio.h>

int main(void)
{
    //declaração de váriaveis(num1 e num2=números a serem digitados // total=resultado da soma inicial de num1 e num2)
    int num1, num2, total;

    //Mensagem inicial e "scan" dos 2 números digitados
    printf("Digite dois números: \n");
    scanf("%d %d", &num1, &num2);
    total=num1+num2;

    //situações da soma de num1 e num2
    if(total>=10)
    {
        //caso 1: se num1+num2 for >=10, deve-se somar 5 a essa soma e imprimir o resultado
        printf("A soma dos números mais 5 é %d", total+5);
    }
    else
    {
        //caso 2: se num1+num2 não for >=10, deve-se somar 7 a essa soma e imprimir o resultado 
        printf("A soma dos números mais 7 é %d", total+7);
    }
    return 0;
}