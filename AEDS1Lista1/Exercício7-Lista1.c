    /*Esse programa vai imprimir diferentes valores de Y dependendo do X digitado pelo usuário */
//Autor: Rubens Castro
//Data de criação: 04/09/2021
//última atualização: 05/09/2021

#include<stdio.h>
int main(void)
{
    //declaração das variáveis (X=número digitado pelo usuário / Y=número impresso, assume valores diferentes em função de X)
    float x, y;

    //"Mensagem inicial e "scan" do valor de X
    printf("Digite um valor para X: ");
    scanf("%f", &x);

    // condições diferentes para valor de Y
    //se X for menor ou igual a 1, Y=1 
    if(x<=1)
    {
        printf("O valor de Y é 1 \n");
    }
    //se X for maior que 1 e menor ou igual a 2, Y=2
    else if(x<=2)
    {
        printf("O valor de Y é 2. \n");
    }
    //se X for maior que 2 e menor ou igual a 3, Y=x^2
    else if(x<=3)
    {
        printf("O valor de Y é %.2lf", x*x);
    }
    //se X for maior que 3, Y=x^3
    else
    {
        printf("O valor de Y é %.2lf", x*x*x);
    }
    return 0;
}