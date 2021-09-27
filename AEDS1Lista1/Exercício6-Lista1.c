/*Esse programa vai ler os coeficientes de uma equação do primeiro grau (ax + b = 0), calcular e escrever a raiz da equação.*/
//Autor: Rubens Castro
//Data de criação: 04/09/2021
//última atualização: 04/09/2021

#include<stdio.h>

int main(void)
{
    //declaração de váriaveis(a e b=coeficientes / x=raiz)
    float a, b, x;

    //Mensagem inicial e "scan" dos 2 coefiecientes digitados
    printf("Digite os coeficientes 'a' e 'b' da equação de 1º grau: \n");
    scanf("%f %f", &a, &b);

    //equação para encontrar a raiz(x)
    x=-b/a;

    //mensagem de saída contendo o valor da raiz(x)
    printf("A raiz dessa equação é %.2lf. \n", x);
    return 0;
    }