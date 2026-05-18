#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre: Recursividade e Loops Complexos

// =========================================
// TORRE - função recursiva
// Move casas para a Direita
// A cada chamada imprime "Direita" e chama
// a si mesma com casas-1, até chegar em 0
// =========================================
void moverTorre(int casas) {
    // caso base: sem casas restantes, para a recursão
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva com uma casa a menos
}

// =========================================================
// BISPO - função recursiva + loops aninhados
// Move casas na diagonal (Cima + Direita)
// A recursão controla quantas vezes o movimento ocorre
// Os loops aninhados imprimem cada direção separadamente:
//   loop externo = movimento vertical (Cima)
//   loop interno = movimento horizontal (Direita)
// =========================================================
void moverBispo(int casas) {
    // caso base: sem casas restantes, para a recursão
    if (casas == 0) {
        return;
    }

    // loop externo: controla o passo vertical (1 vez por diagonal)
    int v;
    for (v = 1; v <= 1; v++) {
        printf("Cima\n");

        // loop interno: controla o passo horizontal (1 vez por diagonal)
        int h;
        for (h = 1; h <= 1; h++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva com uma casa a menos
}

// =========================================
// RAINHA - função recursiva
// Move casas para a Esquerda
// Mesma logica da Torre, mas para o lado oposto
// =========================================
void moverRainha(int casas) {
    // caso base: sem casas restantes, para a recursão
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva com uma casa a menos
}

// =========================================
// CAVALO - loops aninhados complexos
// Move em "L": 2 casas para Cima, 1 para a Direita
// Loop externo controla as 2 casas verticais
// Loop interno controla a 1 casa horizontal
// Usa continue para pular a parte horizontal
// enquanto ainda ha casas verticais a percorrer,
// e break para encerrar o loop interno apos 1 casa
// =========================================
void moverCavalo(int vertical, int horizontal) {
    int v = 0, h = 0; // múltiplas variáveis de controle

    // loop externo: casas verticais + 1 extra para a etapa horizontal
    for (v = 0; v < vertical + 1; v++) {

        // enquanto não terminou as casas verticais, imprime Cima e continua
        if (v < vertical) {
            printf("Cima\n");
            continue; // volta pro início do loop sem executar o que vem abaixo
        }

        // etapa horizontal: executada apenas quando v == vertical
        h = 0;
        while (h < horizontal) {
            printf("Direita\n");
            h++;
            break; // encerra após imprimir 1 casa (horizontal = 1)
        }
    }
}

int main() {

    // Número de casas de cada peça
    int casasTorre   = 5;
    int casasBispo   = 5;
    int casasRainha  = 8;
    int cavaloV      = 2; // casas para Cima
    int cavaloH      = 1; // casas para a Direita

    // Chamadas das funções
    printf("=== Torre ===\n");
    moverTorre(casasTorre);

    printf("\n=== Bispo ===\n");
    moverBispo(casasBispo);

    printf("\n=== Rainha ===\n");
    moverRainha(casasRainha);

    printf("\n=== Cavalo ===\n");
    moverCavalo(cavaloV, cavaloH);

    return 0;
}