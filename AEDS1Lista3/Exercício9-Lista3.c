    /*Faça uma função que lê um número indeterminado de notas de alunos, calcula e retorna a
    média das notas dos alunos aprovados (nota maior ou igual a 6). Faça um programa que lê
    o número de alunos e imprime a média retornada pela função. */
//Autor: Rubens Castro
//Data de criação:20/09/2021
//última atualização:21/09/2021

#include<stdio.h>
#include<math.h>

//função 'notas'
double notas(alunos)
{
    double medianota, //média da nota dos aprovados
           nota, //nota de cada aluno
           alunosaprov=0, //total de alunos aprovados
           somanota=0, //total da soma das notas dos alunos aprovados
           i; //variável de controle
    
    //repetição para análise de todas as notas que forem lidas
    for(i=1;i<=alunos;i++)
    {
    
    //Leitura das notas
    printf("Digite as notas: ");
    scanf("%lf",&nota);

    //condiconal para definir se o aluno tem a nota para ser aprovado
        if(nota>=6)
        {
            alunosaprov++;
            somanota=somanota+nota;
        }

        //cálculo da média das notas dos aprovados
        medianota=somanota/alunosaprov;
    
    }

    //valor retornado = 'medianota'
    return(medianota);

}//fim da função 'notas'

int main()
{
    int Alunos;//total de alunos

    //leitura do número de alunos
    printf("Digite o número de alunos: ");
    scanf("%d",&Alunos);

    //saída com o valor retornado da função 'notas'
    printf("A média das notas dos alunos aprovados é de %.2lf.",notas(Alunos));
    return 0;
}