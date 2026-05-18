#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Aventureiro: Movimentação das Peças com Estruturas de Repetição

int main() {

    // Número de casas que cada peça vai se mover
    int casasTorre  = 5;
    int casasBispo  = 5;
    int casasRainha = 8;

    // Movimento do Cavalo em "L": 2 casas para baixo, 1 para a esquerda
    int cavaloVertical   = 2; // casas para baixo
    int cavaloHorizontal = 1; // casas para a esquerda

    int i; // variável de controle dos loops

    // =========================================
    // TORRE - usa FOR
    // Move 5 casas para a Direita
    // =========================================
    printf("=== Torre ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // =========================================
    // BISPO - usa WHILE
    // Move 5 casas na diagonal (Cima + Direita)
    // =========================================
    printf("\n=== Bispo ===\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // =========================================
    // RAINHA - usa DO-WHILE
    // Move 8 casas para a Esquerda
    // =========================================
    printf("\n=== Rainha ===\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    // ==========================================================
    // CAVALO - usa loops ANINHADOS (for + while)
    // Move em "L": 2 casas para Baixo, 1 para a Esquerda
    // O loop externo (for) controla o movimento completo em L
    // O loop interno (while) imprime cada casa de cada etapa
    // ==========================================================
    printf("\n=== Cavalo ===\n");

    // Loop externo: executa o movimento em L uma vez
    for (i = 1; i <= 1; i++) {

        // Loop interno 1: move 2 casas para Baixo
        int j = 1;
        while (j <= cavaloVertical) {
            printf("Baixo\n");
            j++;
        }

        // Loop interno 2: move 1 casa para a Esquerda
        int k = 1;
        while (k <= cavaloHorizontal) {
            printf("Esquerda\n");
            k++;
        }
    }

    return 0;
}