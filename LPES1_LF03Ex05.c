#include <stdio.h>
#include <stdlib.h>

#define MAX 40

int main(){
    float kwh_consumido, conta;
    char situation[MAX];

    printf("Quantos kWh foram consumidos pela residencia, esse mes? ");
    scanf("%f", &kwh_consumido);

    printf("\nVoce eh aposentado e/ou recebe o Auxilio Emergencial do Governo Federal? (responda sim ou nao, sem acentos)\n");
    scanf("%s", &situation);

    if((strcmp(situation, "nao") == 0)) {
        conta = (kwh_consumido*32)/100;
    }
    if((strcmp(situation, "sim") == 0)) {
        conta = (((kwh_consumido*32)/100) - (((kwh_consumido * 32)/100)*1/4));
    }

    if((strcmp(situation, "sim") == 0) || (strcmp(situation, "nao") == 0)) {
        printf("\nVoce deve pagar um total de %.1f reais pela energia eletrica gasta esse mes.\n\n", conta);
    }
    else{
        printf("\nPor favor, digite apenas sim ou nao (sem utilizar acentos).\n\n");
    }

    system("PAUSE");
    return 0;
}
