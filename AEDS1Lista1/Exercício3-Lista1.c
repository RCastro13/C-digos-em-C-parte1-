    /*Esse programa vai ler o ano de nascimento de uma pessoa e calculá sua idade,
    considerando o ano atual (2021). O programa verificará se já fez aniversário no ano atual. Também checará se a
    pessoa já tem idade para conseguir Carteira de Habilitação (18 anos ou mais) e vai imprimiruma mensagem com a 
    idade da pessoa e se é apta a tirar a CNH */
//Autor: Rubens Castro
//Data de criação: 03/09/2021
//última atualização: 04/09/2021

#include <stdio.h>

int main(void)
{
    //declaração de váriaveis(anonasc= ano de nascimento digitado / idade= idade calculada da pessoa / niveratual= resposta s ou n sobre já ter feito aniversário esse ano)
    int anonasc, idade;
    char niveratual; 
    
    //Mensagem inicial e "scan" do ano de nascimento do usuário
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &anonasc);

    //Segunda pergunta com "scan" da resposta do usuário sobre já ter feito ou não aniversário esse ano
    printf("Você já fez aniversário esse ano? Responda com 'S' ou 'N' \n");
    scanf(" %c", &niveratual);

    //Cálculo da idade e mensagens diferentes caso já tenha feito ou não aniversário esse ano
    if(niveratual=='S' || niveratual=='s')
    {
        idade=2021-anonasc;
        printf("A sua idade é de %d anos.\n", idade);
    }
    else
    {
        idade=2020-anonasc;
        printf("A sua idade é de %d anos. \n", idade);
    }

        //Uso do valor da idade computado acima para decidir se o usuário já é apto ou não de tirar a carteira de motorista
        if(idade>=18)
        {
            printf("Você já está apto a possuir uma carteira de motorista.");
        }
        else
        {
            printf("Você ainda não está apto a possuir uma carteira de motorista");
        }

    return 0;
}