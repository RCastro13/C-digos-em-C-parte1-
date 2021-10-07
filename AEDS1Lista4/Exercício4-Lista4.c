  /*Esse programa terá uma função recursiva que calcula o resto da divisão usando subtrações sucessivas:
  int resto (int numerador, int denominador)
  O programa principal que lerá dois números, acionará a função e exibirá o resultado
  gerado. */
//Autor: Rubens Castro
//Data de criação: 28/09/2021
//última atualização: 30/09/2021

#include<stdio.h>
#include<math.h>

int resto (int num1, int num2)
{
  if (num1 < num2)
  {
    return (num1);
  }
  else
  {
    return(resto(num1-num2,num2));
  }
}

int main(void) {
  int numerador,denominador;

  printf("Digite o dividendo e o divisor: ");
  scanf("%d %d",&numerador,&denominador);

  printf("O resto da divisão é %d \n",resto(numerador,denominador));

  printf("Fim do programa\n");
  return 0;
}