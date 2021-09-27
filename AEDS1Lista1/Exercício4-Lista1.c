   /*Esse programa receberá uma nota informada pelo usuário e vai verificar em qual faixa(Ótimo, Bom, Regular, Insatisfatório)
   essa está e vai imprimir para o usuário a mensagem informando essa faixa*/
//tabela abaixo:
//Autor: Rubens Castro
//Data de criação: 03/09/2021
//última atualização: 03/09/2021

#include<stdio.h>

int main(void)
{
    //declaração de variável (nota=valor da nota do usuário)
    int nota;

    //Mensagem inicial e "scan" da nota do usuário
    printf("Informe a sua nota: \n");
    scanf("%d", &nota);

    //diferentes valores de nota vão mostrar diferentes mensagens
    //de (8,10) = ótima
    if(nota>=8 && nota<=10)
    {
        printf("Sua nota se enquadra como Ótima. \n");
    }
    //de (7,8[ = Bom
    else if(nota>=7)
    {
        printf("Sua nota se enquadra como na faixa Bom \n");
    }
    //de (5,7[ = regular
    else if(nota>=5)
    {
        printf("Sua nota se enquadra como Regular. \n");
    }
    //de (0,5[ = Insatisfatória
    else
    {
        printf("Sua nota se classifica como Insatisfatória");
    }
    return 0;
}
