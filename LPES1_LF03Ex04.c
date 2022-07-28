#include <stdio.h>
#include <stdlib.h>

int main(){
    int preco, pagamento, troco, notas_100, notas_10;

    printf("Qual o preco do produto que deseja comprar, em reais? ");
    scanf("%d", &preco);

    printf("E quanto ira fornecer ao caixa? ");
    scanf("%d", &pagamento);

    if((pagamento == 0) && (preco != 0)){
        printf("\nIsso eh um assalto?\n\n");
    }

    if((pagamento < preco) && (pagamento > 0)){
        printf("\nA quantia entregue (%d reais) nao eh suficiente para pagar pelo produto que deseja.\n\n", pagamento);
    }

    if(pagamento == preco){
        printf("\nSeu pagamento iguala o preco do produto (%d reais), portanto, nao ha troco.\n\n", pagamento);
    }
    if(pagamento > preco){
        //troco total
        troco = pagamento - preco;

        //notas de 100
        notas_100 = troco / 100;
        printf("\nAqui esta a listagem do minimo de notas para seu troco:\n%d notas de R$100,00.\n", notas_100);

        //notas de 10
        troco = troco - (notas_100 * 100);
        notas_10 = troco / 10;
        printf("%d notas de R$10,00.\n", notas_10);

        //notas de 1
        troco = troco - (notas_10 * 10);
        printf("%d notas de R$1,00.\n\n", troco);
    }

    system("PAUSE");
    return 0;
    }
