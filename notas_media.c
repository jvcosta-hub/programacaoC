#include <stdio.h>
int main(){

    int nota1, nota2, nota3;
    float media;

    // Entrada e saida de dados

    printf("Insira a primeira nota: ");
    scanf("%d", &nota1);

    printf("Insira a segunda nota: ");
    scanf("%d", &nota2);

    printf("Insira a terceira nota: ");
    scanf("%d", &nota3);
    // Calculando a média

    media = (float)(nota1 + nota2 + nota3) / 3;
    
    printf("A média das notas é : %.2f\n", media);

    return 0;
}