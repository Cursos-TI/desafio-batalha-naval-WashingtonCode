#include <stdio.h>

//Jogo Batalha Naval
//Versão: Novato
//Aluno: Washington Melo

int main() {
    printf("*** Jogo Batalha Naval ***\n");
    printf("*** Versão Novato - Tabuleiro 10x10 ***\n\n");

    // Criando o tabuleiro 10x10
    int tabuleiro[10][10];

    // Inicializando o tabuleiro com água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // o zero representa a água
        }
    }

    // Posicionando o navio horizontal (3 casas) na linha 2, colunas B, C, D
    tabuleiro[1][1] = 3; // Linha 2, Coluna B
    tabuleiro[1][2] = 3; // Linha 2, Coluna C
    tabuleiro[1][3] = 3; // Linha 2, Coluna D

    // Posicionando o navio vertical (3 casas) na coluna F, linhas 5, 6, 7
    tabuleiro[4][5] = 3; // Linha 5, Coluna F
    tabuleiro[5][5] = 3; // Linha 6, Coluna F
    tabuleiro[6][5] = 3; // Linha 7, Coluna F

    // Imprimindo o tabuleiro
    printf("  A B C D E F G H I J\n"); // Cabeçalho das colunas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1); // Cabeçalho das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}