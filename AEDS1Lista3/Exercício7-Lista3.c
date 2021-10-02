    /*Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo.
    A função deve retornar um valor lógico (true ou false). Faça um programa que lê N
    números e para cada um deles exibe uma mensagem informando se ele é positivo ou não,
    dependendo se foi retornado verdadeiro ou falso pela função. */
//Autor: Rubens Castro
//Data de criação:20/09/2021
//última atualização:21/09/2021

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//função 'verifica'
bool verifica(Num)
{ 
    //condicional para definir valores true e false
    if(Num>0)
    {
        return(true);
    }
    else
    {
        return(false);
    }

}//fim da função


int main()
{
    int num=1;//número digitado

    while (num!=0)
    {
        //leitura de 'num'
        printf("Digite um número inteiro: ");
        scanf("%d",&num);

        //condicional para definição de num como true ou false
        if(verifica(num)==true && num!=0)
        {
            //saída
            printf("Esse número é positivo. \n");
        }
        else if (verifica(num)==false && num!=0)
        {
            //saída
            printf("Esse número é negativo. \n");
        }
        else
        {
          printf("Resultado Nulo. \n");
        }
    }

    printf("Fim do programa. \n");
    return 0;
}