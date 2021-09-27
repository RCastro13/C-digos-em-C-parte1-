    /*Esse programa vai ler uma opção conforme abaixo e o
    salário atual do funcionário, calcular e exibir o novo salário:
    A = aumento de 8% no salário;
    B = aumento de 11% no salário;
    C = aumento fixo no salário
    (de R$ 350,00 se o salário atual for até R$ 1000 e de R$ 200,00 se o salário atual for
    maior que R$ 1000). */
//Autor: Rubens Castro
//Data de criação: 04/09/2021
//última atualização:06/09/2021

#include<stdio.h>

int main(void)
{
    //declaração de váriaveis(salario=valor do salário informado pelo usuário / opcao=letra (a,b ou c) escolhida para conversão do salário)
    int salario;
    char opcao;
    //Mensagem Inicial e "scan" do valor de salario
    printf("Digite o seu salário atual: \n");
    scanf("%d", &salario);

    //Escolha e leitura do opção A,B ou C para variável opcao
    printf("Agora, escolha a opção para calculo do novo salário: \nA)Aumento de 8 por cento no salário. \nB)Aumento de 11 por cento no salário. \nC)Aumento fixo no salário. \n");
    scanf(" %c", &opcao);
    
    //casos de saída para cada valor de opcao
    switch(opcao)
    {
        //Caso digite A ou a, calcular letra "A" do exercício
        case 'a': 
        case 'A':
        printf("Seu novo salário é %.2lf. \n", salario*1.08);
        break;

        //Caso digite B ou b, calcular letra "B" do exercício
        case 'B':
        case 'b':
        printf("Seu novo salário é %.2lf. \n", salario*1.11);
        break;

        //Caso digite C ou c, calcular letra "C" do exercício
        case 'C':
        case 'c':
        
        //analisar se o salário é menor ou igual a 100 para diferentes saídas
        if(salario<=100)
                    {
                        printf("Seu novo salário é %d. \n", salario+350);
                    }
                    else
                    {
                        printf("Se novo salário é %d. \n", salario+200);
                    }
        break;

        //caso digite a letra errada
        default: printf("Letra inválida.\n");
        break;
    }

    return 0;
}
