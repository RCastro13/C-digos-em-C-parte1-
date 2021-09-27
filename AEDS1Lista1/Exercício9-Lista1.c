/*Esse programa deve ler um símbolo do teclado e mostrar as seguintes mensagens, segundo o
caso: "SINAL DE MENOR", "SINAL DE MAIOR", "SINAL DE IGUAL", "OUTRO SINAL" */
//Autor: Rubens Castro
//Data de criação: 04/09/2021
//última atualização:06/09/2021

#include<stdio.h>

int main(void)
{
    //declaração de variáveis(simbolo=simbolo digitado pelo usuario)
    char simbolo;

    //Mensagem inicial e "scan" do valor(símbolo) de simbolo
    printf("Digite um símbolo de seu teclado: \n");
    scanf("%c", &simbolo);

    //diferenciação do sinal digitado com respectivas mensagens
    switch(simbolo)
    {
        case '<': printf("Esse símbolo é o Sinal de Menor. \n");
        break;

        case '>': printf("Esse símbolo é o Sinal de Maior. \n");
        break;

        case '=': printf("Esse símbolo é o Sinal de igual. \n");
        break;

        default: printf("Outro sinal. \n");
    }

    return 0;
}
