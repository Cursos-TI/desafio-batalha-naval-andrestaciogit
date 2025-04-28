#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM][TAM];
    int navio1[TAM_NAVIO] = {3, 3, 3}; // Navio horizontal
    int navio2[TAM_NAVIO] = {3, 3, 3}; // Navio vertical

    // 1. Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Posiciona os navios
    int linha1 = 2, coluna1 = 4; // coordenada inicial do navio horizontal
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha1][coluna1 + i] = navio1[i];
    }

    int linha2 = 5, coluna2 = 7; // coordenada inicial do navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linha2 + i][coluna2] = navio2[i];
    }

    // 3. Exibe o tabuleiro
    printf("   ");
    for (int j = 1; j <= TAM; j++) {
        printf("%2d ", j); // imprime números de coluna
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%c  ", 'A' + i); // imprime letras de linha
        for (int j = 0; j < TAM; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}