    /*Esse programa terá um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a
    letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se for
    ‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). O programa lerá 3
    notas de N alunos e acionará o procedimento para cada aluno. */
//Autor: Rubens Castro
//Data de criação:20/09/2021
//última atualização:21/09/2021

#include<stdio.h>
#include<math.h>

//procedimento 'calculo'
void calculo(double nota1, double nota2, double nota3, char opcao)
{

float resultado,calculo1,calculo2,calculo3;//valor do cálculo da média aritmética ou ponderada

    //condicional para definir qual opcao de cálculo
    if (opcao=='A' || opcao=='a')
    {
        resultado=(nota1+nota2+nota3)/3;
        
        //saída
        printf("O resultado da média de suas notas é %.2lf \n",resultado);
    }

    else if(opcao=='P' || opcao=='p')
    {
    calculo1=nota1*5;
    calculo2=nota2*3;
    calculo3=nota3*2;
    resultado=((calculo1+calculo2+calculo3)/10);

    //saída
    printf("O resultado da média ponderada de suas notas é %.2lf \n",resultado);
    }

}//fim do procedimento

int main()
{
    double valor1,valor2,valor3,//valores das notas 
           N,//quantidade de alunos que terão as notas analisadas
           i; //variável de controle
    
    char letra;//letra para definição do cálculo escolhido

    //leitura de 'N'
    printf("Digite a quantidade de alunos que vocês quer analisar a média das notas: ");
    scanf("%lf",&N);

    //repetição para entrada de vários alunos
    for(int i=1;i<=N;i++)
    {
        printf("Digite sua 1ª nota: ");
        scanf("%lf",&valor1);
        printf("Digite sua 2ª nota: ");
        scanf("%lf",&valor2);
        printf("Digite sua 3ª nota: ");
        scanf("%lf",&valor3);
        printf("Agora digite sua opcao de cálculo (A=média e P=média ponderada): \n");
        scanf(" %c",&letra);
        
        //chamada do procedimento
        calculo(valor1,valor2,valor3,letra);

    }//fim da repetição

    printf("Fim do programa");

    return 0;
}