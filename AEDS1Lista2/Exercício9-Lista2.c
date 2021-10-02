     /*Esse programa vai ler o preço de compra e de venda para diversos produtos e vai determinar quantas mercadorias tiveram
    i) Lucro < 10%
    ii) 10% <= lucro <= 20%
    iii) Lucro > 20%
    e também determinar o valor total de compra e de venda de todas as mercadorias, assim como o lucro total.*/
//Autor: Rubens Castro
//Data de criação: 12/09/2021
//última atualização: 14/09/2021

#include<stdio.h>
#include<math.h>

int main(void)
{
    //declaração de variáveis (mercadoria1,2,3,Naolucro=quantidade de mercadoria com respectivos lucros ou não / precocompra=preço de compra do item / precovenda=preço de venda do item / precocompraTotal=preço total de compra / precovendaTotal=preço total de venda)
    float mercadoria1=0, mercadoria2=0, mercadoria3=0, precocompra,precovenda,precovendaTotal,precocompraTotal, mercadoriaNaolucro=0;

    //Mensagem inicial e leitura dos primeiros valores de precocompra e precovenda
    printf("Digite o valor de compra do produto: ");
    scanf("%f", &precocompra);
    printf("Digite o valor de venda do produto: ");
    scanf("%f", &precovenda);

    //definição do lucro de cada mercadoria para organização segundo enunciado
    if(precovenda-precocompra<precocompra/10)
    {
        mercadoria1++;
    }
        
        else if(precovenda-precocompra>=precocompra/10 && precovenda-precocompra<=precocompra/5)
        {
            mercadoria2++;
        }
            
            else if(precovenda-precocompra>precocompra/5)
            {
                mercadoria3++;
            }
                else
                    {
                        mercadoriaNaolucro++;
                    }
    
    precovendaTotal=precovenda;
    precocompraTotal=precocompra;

    //repetição para escrita de todos os produtos necessários
    while(precocompra != 0)
    {

        printf("Digite o valor de compra do produto: ");
        scanf("%f", &precocompra);
        
        //determina de finaliza logo o programa ou não
        if(precocompra != 0)
        {
            printf("Digite o valor de venda do produto: ");
            scanf("%f", &precovenda);

            if(precovenda-precocompra<precocompra/10)
            {
                mercadoria1++;
            }
        
                else if(precovenda-precocompra>=precocompra/10 && precovenda-precocompra<=precocompra/5)
                {
                    mercadoria2++;
                }
            
                    else if(precovenda-precocompra>precocompra/5)
                    {
                        mercadoria3++;
                    }
                        else
                        {
                            mercadoriaNaolucro++;
                        }

            //cálculo dos valores totais de compra e venda
            precovendaTotal=precovendaTotal+precovenda;
            precocompraTotal=precocompraTotal+precocompra;
        }

    }

    //saídas com o pedido do enunciado
    printf("O total de mercadorias que tiveram lucro menor que 10 por cento foi de %.2lf. \n", mercadoria1);
    printf("O total de mercadorias que tiveram lucro maior ou igual a 10 por cento e menor ou igual a 20 por cento foi de %.2lf. \n", mercadoria2);
    printf("O total de mercadorias que tiveram lucro maior que 20 por cento foi de %.2lf. \n", mercadoria3);
    printf("O total de mercadorias que não deram lucro foi de %.2lf. \n", mercadoriaNaolucro);

    printf("O valor total do preço de compra foi de %.2lf. \n", precocompraTotal);
    printf("O valor total do preço de venda foi de %.2lf. \n", precovendaTotal);
    printf("O lucro total de foi de %.2lf. \n", precovendaTotal-precocompraTotal);

    return 0;
}