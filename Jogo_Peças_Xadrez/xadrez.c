#include <stdio.h>

int main() {
    // Movimentos da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for(int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentos do Bispo: 5 casas na diagonal (Cima e Direita)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while(j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimentos da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while(k < 8);
    
    // Movimentos do Cavalo: 2 casas para baixo e 1 casa para a esquerda
    printf("\nMovimento do Cavalo:\n");

    // Primeiro loop for para o movimento vertical (2 casas para baixo)
    for(int l = 0; l < 2; l++) {
        printf("Baixo\n");
        
        // Loop while para o movimento horizontal (1 casa para a esquerda)
        int m = 0;
        while(m < 1) {
            printf("Esquerda\n");
            m++;
        }
    }

    return 0;
}

