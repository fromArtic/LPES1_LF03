#include <stdio.h>
#include <stdlib.h>

#define MAX 40

int main(){
    float n_listas, n_trabalhos, n_provas, m_ponderada, difference;
    char nome[MAX];

    printf("Ola, aluno. Qual seu nome? ");
    gets(nome);
    printf("- Nome do aluno: %s\n\n", nome);

    printf("Por favor, informe sua nota referente as listas de exercicios: ");
    scanf("%f", &n_listas);
    printf("- Nota obtida: %.1f\n\n", n_listas);

    printf("Agora, sua nota referente aos trabalhos praticos: ");
    scanf("%f", &n_trabalhos);
    printf("- Nota obtida: %.1f\n\n", n_trabalhos);

    printf("E sua nota referente as provas: ");
    scanf("%f", &n_provas);
    printf("- Nota obtida: %.1f\n\n", n_provas);

    m_ponderada = (n_provas*2 + n_listas + n_trabalhos)/4;
    difference = m_ponderada - 6;

    if(difference > 0){
        printf("%s, sua media ponderada eh de %.1f pontos.\nVoce foi avaliado com %.1f pontos acima da media minima e, em conclusao, foi APROVADO.\n\n", nome, m_ponderada, difference);
    }
    if(difference < 0){
        printf("%s, sua media ponderada eh de %.1f pontos.\nVoce foi avaliado com %.1f pontos abaixo da media minima e, em conclusao, foi REPROVADO.\n\n", nome, m_ponderada, difference);
    }
    if(difference == 0){
        printf("%s, sua media ponderada corresponde a nota minima, de %.1f pontos.\nEm conclusao, voce foi APROVADO.\n\n", nome, m_ponderada);
    }

    system("PAUSE");
    return 0;
}
