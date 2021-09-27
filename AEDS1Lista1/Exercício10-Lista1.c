/*Esse programa vai ler a velocidade máxima permitida em uma avenida e a velocidade com que o motorista
estava dirigindo nela. Imprimir se o motorista respeitou a lei ou calcular a multa com as condições:
1 - 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida;
2 - 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida;
3 - 200 reais, se estiver acima de 30km/h da velocidade permitida. */
//Autor: Rubens Castro
//Data de criação: 04/09/2021
//última atualização: 06/09/2021

#include<stdio.h>

int main(void)
{
    //declaração de variáveis (veloc=velocidade do motorista / velocMax=velocidade máxima permitida / velocAMais=o quanto o motorista ultrapassou a velocidade permitida)
    int veloc, velocMax, velocAMais;

    //Mensagens Iniciais e "scan" do valor de veloc e velocMax
    printf("Digite a velocidade máxima da avenida que o motorista estava dirigindo:\n");
    scanf("%d", &velocMax);
    
    printf("Agora, digite a velocidade do motorista nessa avenida: \n");
    scanf("%d", &veloc);
    
    //cálculo para definir o quanto a mais o motorista fez em relação a velocidade máxima permitida caso tenha ultrapassado essa
    velocAMais=veloc-velocMax;

    //quando o motorista respeita a lei
    if(veloc<=velocMax)
    {
        printf("Motorista respeitou a lei. \n");
    }
    //quando o motorista é multado no caso 1
    else if(velocAMais<=10)
    {
        printf("Multa de R$50. \n");
    }
    //quando o motorista é multado no caso 2
    else if(velocAMais<=30)
    {
        printf("Multa de R$100. \n");
    }
    //quando o motorista é multado no caso 3
    else
    {
        printf("Multa de R$200. \n");
    }
    return 0;
}
