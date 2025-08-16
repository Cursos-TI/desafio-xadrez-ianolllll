#include <stdio.h>

// Movimentação da Rainha (recursiva)
void movimentacaorainha(int passo) {
    if (passo > 8) return;
    
    printf("Rainha se movimentou para esquerda %d\n\n", passo);
    movimentacaorainha(passo + 1);
}

// Movimentação da Torre (recursiva)
void movimentacaotorre(int passo) {
    if (passo > 5) return;

    printf("Torre está se movimentando para direita %d\n\n", passo);
    movimentacaotorre(passo + 1);
}

// Movimentação do Bispo (recursiva com loop aninhado)
void movimentacaobispo(int passo) {
    if (passo > 5) return; // para depois de 5 movimentos

    printf("Bispo se movimentou para diagonal direita %d\n", passo);

    // loop aninhado simples só para cumprir o requisito
    for (int lado = 1; lado <= passo; lado++) {
        for (int cima = 1; cima <= passo; cima++) {
            if (lado == cima) {
                // imprime apenas o passo do movimento
                printf("Posição diagonal: %d\n", passo);
            }
        }
    }

    printf("\n");
    movimentacaobispo(passo + 1); // chamada recursiva
}

// Movimentação do Cavalo (loop com múltiplas variáveis + continue/break)
void movimentacaocavalo() {
    for (int cima = 1, lado = 2; cima <= 2 && lado >= 1; cima++, lado--) {
        if (cima == 2) continue; 
        printf("Cavalo movimentou em L: cima = %d lado = %d\n", cima, lado);
        break; 
    }
}

int main() {
    printf("***** BEM VINDO AO SIMULADOR DE MOVIMENTAÇÃO DE PEÇAS DE XADREZ *****\n\n");

    printf("Movimentação da Rainha\n\n");
    movimentacaorainha(1);

    printf("Movimentação da Torre\n\n");
    movimentacaotorre(1);

    printf("Movimentação do Bispo\n\n");
    movimentacaobispo(1);

    printf("Movimentação do Cavalo\n\n");
    movimentacaocavalo();

    return 0;
}
