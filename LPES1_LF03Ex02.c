#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorA, valorB, valorC;

    printf("Indique o valor A: ");
    scanf("%d", &valorA);

    printf("Indique o valor B: ");
    scanf("%d", &valorB);

    printf("Indique o valor C: ");
    scanf("%d", &valorC);

    if((valorA > valorB) && (valorA > valorC) && (valorB > valorC)){
        printf("\nA ordem crescente entre os valores digitados eh: %d, %d e %d.\nJa a ordem decrescente eh: %d, %d e %d.\n\n", valorC, valorB, valorA, valorA, valorB, valorC);
    }

    if((valorA > valorB) && (valorA > valorC) && (valorB < valorC)){
        printf("\nA ordem crescente entre os valores digitados eh: %d, %d e %d.\nJa a ordem decrescente eh: %d, %d e %d.\n\n", valorB, valorC, valorA, valorA, valorC, valorB);
    }

    if((valorB > valorA) && (valorB > valorC) && (valorA > valorC)){
        printf("\nA ordem crescente entre os valores digitados eh: %d, %d e %d.\nJa a ordem decrescente eh: %d, %d e %d.\n\n", valorC, valorA, valorB, valorB, valorA, valorC);
    }

    if((valorB > valorA) && (valorB > valorC) && (valorA < valorC)){
        printf("\nA ordem crescente entre os valores digitados eh: %d, %d e %d.\nJa a ordem decrescente eh: %d, %d e %d.\n\n", valorA, valorC, valorB, valorB, valorC, valorA);
    }

    if((valorC > valorA) && (valorC > valorB) && (valorA > valorB)){
        printf("\nA ordem crescente entre os valores digitados eh: %d, %d e %d.\nJa a ordem decrescente eh: %d, %d e %d.\n\n", valorB, valorA, valorC, valorC, valorA, valorB);
    }

    if((valorC > valorA) && (valorC > valorB) && (valorA < valorB)){
        printf("\nA ordem crescente entre os valores digitados eh: %d, %d e %d.\nJa a ordem decrescente eh: %d, %d e %d.\n\n", valorA, valorB, valorC, valorC, valorB, valorA);
    }

    system("PAUSE");
    return 0;
}
