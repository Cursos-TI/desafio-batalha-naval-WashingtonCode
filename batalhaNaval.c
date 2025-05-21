#include <stdio.h>

//Jogo Batalha Naval
//Versão: Mestre
//Aluno: Washington Melo

int main() {
    printf("*** Jogo Batalha Naval ***\n");
    printf("*** Versão Mestre - Tabuleiro 10x10 ***\n\n");

    // Criando o tabuleiro 10x10
    int tabuleiro[10][10];

    // Inicializando o tabuleiro com água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // o zero representa a água
        }
    }

    // Posicionando o navio horizontal (3 casas)
    tabuleiro[0][5] = 3; // Linha 0, Coluna F
    tabuleiro[0][6] = 3; // Linha 0, Coluna G
    tabuleiro[0][7] = 3; // Linha 0, Coluna H

    // Posicionando o navio vertical (3 casas)
    tabuleiro[2][9] = 3; // Linha 2, Coluna J
    tabuleiro[3][9] = 3; // Linha 3, Coluna J
    tabuleiro[4][9] = 3; // Linha 4, Coluna J

// Posicionando o navio na diagonal principal (3 casas)
    for (int i = 7; i < 10; i++) {
        tabuleiro[i][i] = 3; // casas H7, I8, J9
    }

    // Posicionando o navio na diagonal secundária (3 casas)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = 3; // casas J0, I1, H2
    }

    // Adicionando a habilidade cone (área de efeito)
    int apice_cone = 3; // inicio do cone (coluna D, índice 3)
    int altura_cone = 3;   // altura do cone (3 linhas)

    for (int i = 0; i < altura_cone; i++) {
        for (int j = -i; j <= i; j++) { // Expande para os lados conforme a linha
            int col = apice_cone + j; 
            int lin = i; // começa na linha 0
            tabuleiro[lin][col] = 5; // marca a área de efeito com o número 5
            }
    }
    
     // Adicionando a habilidade cruz (área de efeito)
    int linha_cruz = 5; // linha da cruz (linha 5, índice 5)
    int coluna_cruz = 6; // coluna da cruz (coluna G, índice 6)

    for (int i = -1; i <= 1; i++) { // linha da cruz
        for (int j = -2; j <= 2; j++) { // coluna da cruz
            if (i == 0 || j == 0) { // só marca se for o centro ou estiver na mesma linha/coluna do centro
                int lin = linha_cruz + i;
                int col = coluna_cruz + j;
                tabuleiro[lin][col] = 5; // marca a área de efeito com o número 5
            }
        }
    }

    // Adicionando a habilidade octaedro (área de efeito)
    int linha_octaedro = 7; // linha do octaedro (linha 7, índice 7)
    int coluna_octaedro = 2; // coluna do octaedro (coluna C, índice 2)
    
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            // Só marca se for o centro ou estiver na mesma linha/coluna do centro
            if (i == 0 || j == 0) {
                int lin = linha_octaedro + i;
                int col = coluna_octaedro + j;
                tabuleiro[lin][col] = 5; // marca a área de efeito com o número 5
            }
        }
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