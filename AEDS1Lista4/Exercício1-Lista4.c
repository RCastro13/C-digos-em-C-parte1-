  /*Esse programa terá uma função em C para contar os dígitos de um determinado número usando recursão.
  O programa principal lerá um número, acionará a função e exibirá o resultado gerado. */
//Autor: Rubens Castro
//Data de criação: 28/09/2021
//última atualização: 29/09/2021

#include<stdio.h>
#include<math.h>

//função 'contador'
int contador(num1)
{
  int cont=1;//contador para definir o número de dígitos
    
    //condicional para acionar recursividade
    if(num1>=10)
    {
      //divisão por 10 para definir quantos termo
      num1=num1/10;

      //contagem dos termos após a recursão
      cont=cont+contador(num1);
    }

    return(cont);

}//fim da função


int main(void)
{
    int num;//número a ser digitado

    //leitura
    printf("Digite um número: ");
    scanf("%d",&num);

    //saída com o valor retornado da função
    printf("O total de dígitos desse número é %d. \n",contador(num));

    return 0;
}