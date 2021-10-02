    /*Esse código vai ler um voto de uma eleição com 4 candidatos + votos nulos e brancos e vai mostrar o total de votos para cada
    candidato, o total de votos nulos e o total de votos brancos.
    1,2,3,4 = voto para os respectivos candidatos;
    5 = voto nulo;
    6 = voto em branco;
    Como finalizador do conjunto de votos, tem-se o valor 0.*/
//Autor: Rubens Castro
//Data de criação: 12/09/2021
//última atualização: 14/09/2021

#include<stdio.h>
#include<math.h>

int main(void)
{
    //declaração de variáveis (candidato1,2,3,4 = total de votos para respectivos candidatos / voto=número para quem vai o voto / nulo,brnaco = total de votos nulos e brancos)
    int candidato1=0,candidato2=0,candidato3=0,candidato4=0, voto, nulo=0, branco=0;
    
    //Mensagem inicial e leitura do primeiro voto 
    printf("Escolha em quem você vai votar pressionando o respectivo número (para finalizar a votação use 0): \n");
    printf("1-Candidato 1 \n2-Candidato 2 \n3-Candidato 3 \n4-Candidato 4 \n5-Voto Nulo \n6-Voto em branco \nSeu voto: ");
    scanf("%d", &voto);

    //repetição para gerar próximos votos 
    while(voto != 0)
    {
      
      //definição para quem vai o voto e soma +1 no escolhido
      if(voto==1)
      {
          candidato1++;
      }  
        else if(voto==2)
        {
            candidato2++;
        }
            else if(voto==3)
            {
                candidato3++;
            }
                else if(voto==4)
                {
                    candidato4++;
                }
                    else if(voto==5)
                    {
                        nulo++;
                    }
                        else
                        {
                            branco++;
                        }
        printf("Escolha em quem você vai votar pressionando o respectivo número (para finalizar a votação use 0): \n");
        printf("1-Candidato 1 \n2-Candidato 2 \n3-Candidato 3 \n4-Candidato 4 \n5-Voto Nulo \n6-Voto em branco \nSeu voto: ");
        scanf("%d", &voto);

    }//fim da repetição

    //saídas com o pedido do enunciado
    printf("O candidato 1 recebeu %d votos.\n",candidato1);
    printf("O candidato 2 recebeu %d votos.\n",candidato2);
    printf("O candidato 3 recebeu %d votos.\n",candidato3);
    printf("O candidato 4 recebeu %d votos.\n",candidato4);
    printf("O total de votos nulos foi de %d.\n", nulo);
    printf("O total de votos em branco foi de %d.\n", branco);
    

    return 0;
}