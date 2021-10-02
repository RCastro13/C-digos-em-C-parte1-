    /*Esse programa coletará dados de habitantes de uma cidade sobre o salário e número de filhos.
    Um procedimento que lerá esses dados para um número não determinado de pessoas, vai calcular e exibir
    a média de salário da população (a condição de parada pode ser um flag ou a quantidade N). O programa acionará o
    procedimento. */
//Autor: Rubens Castro
//Data de criação:20/09/2021
//última atualização:21/09/2021

#include<stdio.h>
#include<math.h>

//procedimento 'calculo'
void calculo ()
{
    int salario, // valor do salário
        filhos, //número de filhos
        i, //variável de controle da repetição
        totalsalario=0, //soma de todos os salários
        totalfilhos=0; //soma do número de filhos

    float mediafilhos, //valor da média de filhos 
          mediasalario, //valor da média salarial
          N; //total de pessoas que vão responder

    //Leitura das variáveis N,salario e filhos;
    printf("Quantas pessoas vão responder esse programa?");
    scanf("%f",&N);

    printf("Digite o seu salário: ");
    scanf("%d",&salario);
    printf("Digite quantos filhos você possui: ");
    scanf("%d",&filhos);

    //definição inicial do total de filhos e do total salarial
    totalsalario=totalsalario+salario;
    totalfilhos=totalfilhos+filhos;

    //repetição para mais respostas 
    for (i=2;i<=N;i++)
    {   
        //Leitura das variáveis N,salario e filhos;
        printf("Digite o seu salário: ");
        scanf("%d",&salario);
        printf("Digite quantos filhos você possui: ");
        scanf("%d",&filhos);

        //cálculo contínuo do total de filhos e total salarial
        totalsalario=totalsalario+salario;
        totalfilhos=totalfilhos+filhos;
    
    }//fim da repetição

    //cálculo da média salarial e de filhos
    mediasalario=totalsalario/N;
    mediafilhos=totalfilhos/N;

    //saída com o pedido do enunciado
    printf("A média salarial é igual a: R$%.2lf.\n",mediasalario);
    printf("A média de filhos é igual a %.2lf.\n",mediafilhos);
    
    printf("Fim do programa.\n");

}//fim do procedimento

int main()
{
    //chamada do procedimento
    calculo();

    return 0;
}