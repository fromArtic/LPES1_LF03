#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano;

    printf("Digite seu ano de escolha: ");
    scanf("%d", &ano);

    if((ano%4==0) && (ano%100!=0) || (ano%4==0) && (ano%100==0) && (ano%400==0)) {
        printf("%d eh um ano bissexto.\n\n", ano);
    }

    if((ano%4!=0) || (ano%4==0) && (ano%100==0) && (ano%400!=0)){
        printf("%d nao eh um ano bissexto.\n\n", ano);
    }

    system("PAUSE");
    return 0;
}
