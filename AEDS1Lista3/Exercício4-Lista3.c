    /*Esse programa terá um procedimento que recebe 3 valores reais X, Y e Z e verifica se esses
    valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o
    tipo de triângulo formado. O procedimento identificará o
    tipo de triângulo formado como escaleno, isósceles ou equilátero.
    O programa que lerá um número indeterminado de triângulos (valores dos 3 lados) e
    para cada triângulo, acionará o procedimento. */
//Autor: Rubens Castro
//Data de criação:20/09/2021
//última atualização:21/09/2021

#include<stdio.h>
#include<math.h>

//procedimento 'triangulo'
void triangulo(int lado1,int lado2, int lado3)
{
    //condicional para definição se com os valores fornecidos é possível formar um triângulo
    if(lado1+lado2>lado3 && lado2+lado3>lado1 && lado1+lado3>lado2)
    {

        //condicional para definir que tipo de triângulo é
        if(lado1==lado2 && lado1==lado3)
        {
            printf("Esse é um triângulo equilátero/isósceles. \n");
        }
        else if(lado1!=lado2 && lado1!=lado3 &&lado2!=lado3)
        {
            printf("Esse é um triângulo escaleno. \n");
        }
        else
        {
            printf("Esse é um triângulo isósceles. \n");
        }
        
    }

    else
    {
        printf("Os lados fornecidos não podem formar um triângulo. \n");
    }

}//fim do procedimento

int main()
{
    float ladoA,ladoB,ladoC; //valores para análise

    //repetição infinita para análise dos valores
    do
    {
        //leitura dos valores 
        printf("Digite 3 valores reais: ");
        scanf("%f %f %f",&ladoA,&ladoB,&ladoC);
        
        //chamada do procedimento
        triangulo(ladoA,ladoB,ladoC);
    
    }while(ladoA!=0 && ladoB!=0 && ladoC!=0);
    
    return 0;
}