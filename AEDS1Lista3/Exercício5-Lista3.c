    /* Esse programa terá um procedimento que recebe a média final de um aluno, identifica e exibe o seu
    conceito. O programa que lerá a média de N alunos, acionando o procedimento para cada um deles.*/
//Autor: Rubens Castro
//Data de criação:20/09/2021
//última atualização:21/09/2021

#include<stdio.h>
#include<math.h>

//procedimento 'notafinal'
void notafinal (int media)
{
    //condicioanal para definir o conceito pela média informada
    if(media<=39)
    {
        printf("Seu conceito é 'F'. \n");
    }

    else if(media<=59)
    {
        printf("Seu conceito é 'E'. \n");
    }

    else if(media<=69)
    {
        printf("Seu conceito é 'D'. \n");
    }

    else if(media<=79)
    {
        printf("Seu conceito é 'C'. \n");
    }

    else if(media<=89)
    {
        printf("Seu conceito é 'B'. \n");
    }

    else
    {
        printf("Seu conceito é 'A'. \n");
    }

}//fim do procedimento

int main()
{
    double mediafinal, //média final informada pelo aluno
           N, //número de alunos 
           i; //variável de controle da repetição

    //Leitura do total de alunos
    printf("Digite quantos alunos vão calcular a conceito final: ");
    scanf("%lf",&N);

    //repetição para cada aluno checar seu conceito
    for(i=1;i<=N;i++)
    {   
        //leitura da média final
        printf("Digite a sua média final: ");
        scanf("%lf",&mediafinal);

        //chamada do procedimento
        notafinal(mediafinal);

    }//fim da repetição

    printf("Fim do programa. \n");

    return 0;
}