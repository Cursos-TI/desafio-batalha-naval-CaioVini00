#include <stdio.h>


// Desafio Batalha Naval - MateCheck
#define TAMANHO_TABULEIRO 10  // Tamanho fixo do tabuleiro
#define TAMANHO_NAVIO 3       // Tamanho fixo dos navios

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Declarando o tabuleiro (matriz 10x10) e inicializando tudo com 0 (água)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Vetores que representam os dois navios
    int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3};
    int navio_vertical[TAMANHO_NAVIO] = {3, 3, 3};

    // Definindo as posições iniciais dos navios
    int linha_navio_horizontal = 2; // linha onde começa o navio horizontal
    int coluna_navio_horizontal = 4; // coluna onde começa o navio horizontal

    int linha_navio_vertical = 5; // linha onde começa o navio vertical
    int coluna_navio_vertical = 7; // coluna onde começa o navio vertical

    // Verificando se os navios cabem no tabuleiro 
    if (coluna_navio_horizontal + TAMANHO_NAVIO <= TAMANHO_TABULEIRO &&
        linha_navio_vertical + TAMANHO_NAVIO <= TAMANHO_TABULEIRO) {
        
        // Posicionando o navio horizontal no tabuleiro
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = navio_horizontal[i];
        }

        // Posicionando o navio vertical no tabuleiro
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] = navio_vertical[i];
        }

        // Exibindo o tabuleiro
        printf("\nTabuleiro Batalha Naval:\n\n");
        for (int linha = 0; linha < TAMANHO_TABULEIRO; linha++) {
            for (int coluna = 0; coluna < TAMANHO_TABULEIRO; coluna++) {
                printf("%d ", tabuleiro[linha][coluna]);
            }
            printf("\n");
        }

    } else {
        printf("Erro: As posições dos navios ultrapassam os limites do tabuleiro.\n");
    }

    return 0;
}
