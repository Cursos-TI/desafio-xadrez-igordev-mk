#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nivel Novato: Movimentação das Peças com Estruturas de Repetição

int main() {

    // Número de casas que cada peça vai se mover
    int casasTorre  = 5;
    int casasBispo  = 5;
    int casasRainha = 8;

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

    return 0;
}