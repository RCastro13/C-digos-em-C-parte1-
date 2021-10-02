    /* Esse programa terá um procedimento que recebe 3 valores inteiros por parâmetro e os exibe em ordem
    crescente. O programa lerá N conjuntos de 3 valores e acionará o procedimento
    para cada conjunto.*/
//Autor: Rubens Castro
//Data de criação:20/09/2021
//última atualização:21/09/2021

#include<stdio.h>
#include<math.h>

//procedimento 'ordem'
void ordem(int num1,int num2,int num3)
{
    //condicionais para definição da ordem crescente (6 possibilidades)
    if(num1>=num2 && num1>=3 && num2>=num3)
    {
        printf("A ordem crescente é %d, %d, %d. \n",num3,num2,num1);
    }    
    else if(num1>=num2 && num1>=3 && num3>=num2)
    {
       printf("A ordem crescente é %d, %d, %d. \n",num2,num3,num1); 
    }
    else if(num2>=num1 && num2>=num3 && num1>=num3)
    {
        printf("A ordem crescente é %d, %d, %d. \n",num3,num1,num2); 
    }
    else if(num2>=num1 && num2>=num3 && num3>=num1)
    {
        printf("A ordem crescente é %d, %d, %d. \n",num1,num3,num2); 
    }
    else if(num3>=num1 && num3>=num2 && num2>=num1)
    {
        printf("A ordem crescente é %d, %d, %d. \n",num1,num2,num3); 
    }
    else if(num3>=num1 && num3>=num2 && num1>=num2)
    {
        printf("A ordem crescente é %d, %d, %d. \n",num2,num1,num3); 
    }

}//fim do procedimento


int main()
{
    int valor1,valor2,valor3, //valores dos números digitados 
        N, //total de conejuntos
        i; //variável de controle da repetição

    //Leitura do total de conjuntos
    printf("Digite o total de conjuntos: ");
    scanf("%d", &N);

    //repetição para leitura de todos os conjuntos
    for(i=1;i<=N;i++)
    {
    
        //Leitura dos valores
        printf("Digite 3 valores: ");
        scanf("%d %d %d",&valor1,&valor2,&valor3);

        //chamada do procedimento
        ordem(valor1,valor2,valor3);

    }//fim da repetição

    printf("Fim do programa. \n");
    

    return 0;
}