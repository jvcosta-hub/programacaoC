#include <stdio.h>

// Função para simular o movimento da Torre usando for
void moverTorre() {
    int casas = 5; // Número de casas a mover
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= casas; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");
}

// Função para simular o movimento do Bispo usando while
void moverBispo() {
    int casas = 5; // Número de casas a mover
    int contador = 1;
    printf("Movimento do Bispo (5 casas na diagonal para Cima Direita):\n");
    while (contador <= casas) {
        printf("Casa %d: Cima, Direita\n", contador);
        contador++;
    }
    printf("\n");
}

// Função para simular o movimento da Rainha usando do-while
void moverRainha() {
    int casas = 8; // Número de casas a mover
    int i = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= casas);
    printf("\n");
}

int main() {
    // Chama as funções para simular os movimentos
    moverTorre();
    moverBispo();
    moverRainha();

    return 0;
}