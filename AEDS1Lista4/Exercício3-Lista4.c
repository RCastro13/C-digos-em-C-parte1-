  /*Esse programa terá uma função recursiva que calcula a divisão usando subtrações sucessivas:
  int divisao (int numerador, int denominador)
  O programa principal lerá dois números, acionará a função e exibirá o resultado
  gerado. */
//Autor: Rubens Castro
//Data de criação: 28/09/2021
//última atualização: 30/09/2021

#include <stdio.h>
#include <math.h>

//função 'divisão'
double divisao (int num1, int num2)
{
    //condicional para acionar a recursão
    if (num1 < num2)
    {
      //caso não tenha mais como dividir
      return (0);
    }

    else

    {
      //valor para retornar para continuar as subtrações
      return(divisao(num1-num2,num2)+1);
    }

}//fim da função

int main(void) 
{

    int numerador, //número que será o numerador da divisão
        denominador; //número que será o denominador da divisão

    //leitura
    printf("Digite o dividendo e o divisor: ");
    scanf("%d %d",&numerador,&denominador);

    //saída com o valor retornado pela função 
    printf("O resultado da divisão é %.2lf\n",divisao(numerador,denominador));

    return 0;
}