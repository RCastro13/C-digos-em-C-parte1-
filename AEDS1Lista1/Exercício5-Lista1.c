    /*Esse programa receberá o valor da diária normal de um hotel com 75 apartamentos e informará
    o valor da diária com 25% de desconto, o valor total arrecadado com 80% de ocupação e diária promocional,
    o valor total arrecadado com 50% de ocupação e diária normal e a diferença entre estes dois valores.*/
//Autor: Rubens Castro
//Data de criação: 03/09/2021
//última atualização: 04/09/2021

#include<stdio.h>

int main(void)
{
    //declaração de variáveis (diaria=valor normal da diaria / desconto=valor cobrado pela diária com 25% de desconto)
    int diaria,desconto;

    //Mensagem inicial e "scan" do valor da diaria
    printf("Insira o valor da diária normal do hotel: \n");
    scanf("%d", &diaria);

    //cálculo do valor do desconto
    desconto=diaria-(diaria/4);

    //Mensagens que aparecerão informando: 1)valor da diária com 25% de desconto, 2)valor arrecadado com 80% da ocupação e 25% de
    //desconto na diária, 3)valor arrecadado com 50% de ocupação e valor normal da diária, 4)A diferença entre os valores 2 e 3.
    printf("O valor da diária com 25 por cento de desconto é %d. \n", desconto);
    
    printf("Com 80 por cento da ocupação e diária em desconto de 25 por cento se consegue o valor arrecadado de %d. \n", 60*(desconto));

    printf("Com 50 por cento de ocupação e diária com preço normal, tem-se o valor arrecadado de %d. \n", (75/2)*diaria);

    printf("A diferença entre os valores acima é de %d. \n", 60*(desconto)-75/2*diaria);
    
    return 0;
}