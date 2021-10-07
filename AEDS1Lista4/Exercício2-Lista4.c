  /*Esse programa terá uma função para encontrar a soma dos dígitos de um número usando recursão. O
  programa principal lerá um número, acionará a função e exibirá o resultado gerado. */
//Autor: Rubens Castro
//Data de criação: 28/09/2021
//última atualização: 29/09/2021


#include<stdio.h>
#include<math.h>

//função 'soma'
int soma(num)
{
  int cont=0;//variável para auxílio na soma dos dígitos 

    //condicional para acionar a recursividade
    if(num>=10)
    {
      //definição de cada termo
      cont=num%10;

      //valor para retornar / cálculo da soma dos dígitos
      return(cont+soma(num/10));

    }

    else

    {
      //valor para voltar em caso seja menor que 10, por que será ele mesmo
      return(num);

    }
    
}//fim da função


int main(void)
{
    int num;//número a ser digitado

    //leitura
    printf("Digite um número: ");
    scanf("%d",&num);

    //saída com o valor retornado da função
    printf("A soma dos dígitos é %d",soma(num));

    return 0;
}
