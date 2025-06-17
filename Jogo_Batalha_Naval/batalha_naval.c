#include <stdio.h>
#include <stdbool.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // 0 representa água
        }
    }
}

// Função para verificar se é possível posicionar um navio horizontal ou vertical
bool podePosicionar(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int orientacao) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (orientacao == 0) { // horizontal
            if (coluna + i >= TAMANHO_TABULEIRO || tabuleiro[linha][coluna + i] != 0) {
                return false;
            }
        } else { // vertical
            if (linha + i >= TAMANHO_TABULEIRO || tabuleiro[linha + i][coluna] != 0) {
                return false;
            }
        }
    }
    return true;
}

// Função para posicionar um navio horizontal ou vertical
void posicionarNavio(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int orientacao) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (orientacao == 0) { // horizontal
            tabuleiro[linha][coluna + i] = 3; // 3 representa parte do navio
        } else { // vertical
            tabuleiro[linha + i][coluna] = 3;
        }
    }
}

// Função para verificar se é possível posicionar um navio diagonal
bool podePosicionarDiagonal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int tipo) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tipo == 0) { // diagonal crescente
            if (linha + i >= TAMANHO_TABULEIRO || coluna + i >= TAMANHO_TABULEIRO || tabuleiro[linha + i][coluna + i] != 0) {
                return false;
            }
        } else { // diagonal decrescente
            if (linha + i >= TAMANHO_TABULEIRO || coluna - i < 0 || tabuleiro[linha + i][coluna - i] != 0) {
                return false;
            }
        }
    }
    return true;
}

// Função para posicionar um navio diagonal
void posicionarNavioDiagonal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna, int tipo) {
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tipo == 0) { // diagonal crescente
            tabuleiro[linha + i][coluna + i] = 3;
        } else { // diagonal decrescente
            tabuleiro[linha + i][coluna - i] = 3;
        }
    }
}

// Função para exibir o tabuleiro no console
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    inicializarTabuleiro(tabuleiro);
    
    // Posicionando os navios no tabuleiro
    if (podePosicionar(tabuleiro, 1, 1, 0)) { // Navio horizontal na linha 1, coluna 1
        posicionarNavio(tabuleiro, 1, 1, 0);
    }

    if (podePosicionar(tabuleiro, 4, 4, 1)) { // Navio vertical na linha 4, coluna 4
        posicionarNavio(tabuleiro, 4, 4, 1);
    }

    if (podePosicionarDiagonal(tabuleiro, 6, 6, 0)) { // Navio diagonal crescente na linha 6, coluna 6
        posicionarNavioDiagonal(tabuleiro, 6, 6, 0);
    }

    if (podePosicionarDiagonal(tabuleiro, 2, 7, 1)) { // Navio diagonal decrescente na linha 2, coluna 7
        posicionarNavioDiagonal(tabuleiro, 2, 7, 1);
    }

    // Exibindo o Tabuleiro Completo
    printf("Tabuleiro do Batalha Naval:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}