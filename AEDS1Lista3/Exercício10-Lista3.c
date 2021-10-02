    /*Esse programa terá uma função que recebe a idade de um nadador por parâmetro e retorna a categoria
    desse nadador. O programa vai ler a idade de um nadador e imprime a categoria retornada pela
    função.*/
//Autor: Rubens Castro
//Data de criação:20/09/2021
//última atualização:21/09/2021

#include<stdio.h>
#include<math.h>

//função 'categoria'
int categoria(idade)
{
    char categoria;//definição da categoria

    //condicional para definição da categoria do nadador
    if(idade>=5 && idade<=7)
    {
        categoria='F';
    }

    else if(idade>=8 && idade<=10)
    {
        categoria='E';
    }

    else if(idade>=11 && idade<=13)
    {
        categoria='D';
    }

    else if(idade>=14 && idade<=15)
    {
        categoria='C';
    }

    else if(idade>=16 && idade<=17)
    {
        categoria='B';
    }

    else if(idade>=18)
    {
        categoria='A';
    }
    
    //caso não tenha categoria
    else
    {
        categoria='s';
    }

    //valor retornado = 'categoria'
    return(categoria);

}//fim da função 'categoria'

int main()
{
    int Idade;//idade do nadador

    //leitura da idade
    printf("Digite sua idade: ");
    scanf("%d",&Idade);
    
    //condicional para ver se enquadra em alguma categoria
    if(categoria(Idade)!='s')
    {
        //saída com o valor de 'categoria' com a letra da respectiva categoria
        printf("A sua categoria é a %c. \n",categoria(Idade));
    }
    else
    {
    printf("Você ainda não possui categoria. \n");
    }
    printf("Fim do programa. \n");

    return 0;
}