  /*Esse programa vai coletar dados sobre o salário e número de filhos de cada habitante. A prefeitura deseja saber:
  a) média do salário da população;
  b) média do número de filhos;
  c) maior salário;
  d) percentual de pessoas com salário até R$100,00. 
  O final da leitura de dados se dará com a entrada de um salário negativo. */
//Autor: Rubens Castro
//Data de criação: 12/09/2021
//última atualização: 14/09/2021

#include<stdio.h>
#include<math.h>

int main(void)
{
    //declaração de variáveis(filhos=número de filhos informado pelo habitante / salario=salário informado pelo habitante / numpessoas=total de habitantes que responderam / pessoas100=total de pessoas com salário menor que R$100 /maiorsalario=valor do maior salário informado /mediafilhos=média de filhos por habitante / mediaSalario=média salarial dos habitantes  )
    int filhos, salario, numpessoas=1, pessoas100, maiorsalario;
    float mediafilhos, mediaSalario;

    //Mensagens inicial e leitura das informações de salário e filhos do primeiro usuário
    printf("Insira o valor de seu salário: ");
    scanf("%d", &salario);
    printf("Quantos filhos você tem? ");
    scanf("%d", &filhos);

    if(salario<=100)
            {
              pessoas100++;
            }
    
    //definição inicial dos valores para cálculo posterior
    mediaSalario=salario;
    mediafilhos=filhos;
    maiorsalario=salario;

    //repetição para mais pessoas informarem seus dados até que seja inserido valor negativo
    while(salario>=0)
    {

      printf("Insira o valor de seu salário: ");
      scanf("%d", &salario);

      //condicinal para analisar se o valor informado em salario foi negativo para travar essa repetição e evitar dados a mais
      if(salario>=0)
      {

       numpessoas++;

            //condicional para enquadrar os dados dentro dos pedidos do enunciado quanto ao salario
            if(salario<=100)
            {
              pessoas100++;
            }

              if(salario>maiorsalario)
              {
                  maiorsalario=salario;
              }

        
        //cálculo do salário total      
        mediaSalario=mediaSalario+salario;

        printf("Quantos filhos você tem? ");
        scanf("%d", &filhos);

        //cálculo do total de filhos
        mediafilhos=mediafilhos+filhos;
    
      }
    }
    
    //cálculo das médias salarial e de filhos e a porcentagem de pessoas que recebem menos de R$100
    mediaSalario=mediaSalario/numpessoas;
    mediafilhos=mediafilhos/numpessoas;
    pessoas100=pessoas100*100/numpessoas;

    //saída com os pedidos do enunciado
    printf("A média salarial da população é %.2lf. \n", mediaSalario);
    printf("A média do número de filhos é %.2lf. \n", mediafilhos);
    printf("O maior salário é de %d. \n", maiorsalario);
    printf("O percentual de pessoas com salário de até R$100 é de %d por cento. \n", pessoas100);

    printf("Fim do programa. \n");

    return 0;
}