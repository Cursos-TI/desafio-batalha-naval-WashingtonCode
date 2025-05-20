#include <stdio.h>

//Jogo Batalha Naval
//Versão: Aventureiro
//Aluno: Washington Melo

int main() {
    printf("*** Jogo Batalha Naval ***\n");
    printf("*** Versão Aventureiro - Tabuleiro 10x10 ***\n\n");

    // Criando o tabuleiro 10x10
    int tabuleiro[10][10];

    // Inicializando o tabuleiro com água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // o zero representa a água
        }
    }

    // Posicionando o navio horizontal (3 casas)
    tabuleiro[1][3] = 3; // Linha 1, Coluna D
    tabuleiro[1][4] = 3; // Linha 1, Coluna E
    tabuleiro[1][5] = 3; // Linha 1, Coluna F

    // Posicionando o navio vertical (3 casas)
    tabuleiro[4][8] = 3; // Linha 4, Coluna I
    tabuleiro[5][8] = 3; // Linha 5, Coluna I
    tabuleiro[6][8] = 3; // Linha 6, Coluna I

// Posicionando o navio na diagonal principal (3 casas)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3; // [0][0] ou A0, [1][1] ou B1, [2][2] ou C2
    }

    // Posicionando o navio na diagonal secundária (3 casas)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = 3; // [0][9] ou J0, [1][8] ou I1, [2][7] ou H2
    }

    // Imprimindo o tabuleiro
    printf("  A B C D E F G H I J\n"); // Cabeçalho das colunas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i); // Cabeçalho das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}