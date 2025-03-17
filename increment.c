#include <stdio.h>

int main() {

int num1, resultado;

num1=1;

    printf("Valor variável NUM1 = %d\n", num1);
    resultado = ++num1;
    printf("Após pré-incremento: %d\n", resultado);

    printf("\n");

    printf("Valor variável NUM1 = %d\n", num1);
    resultado = num1++;
    printf("Após pós-incremento: %d\n", resultado);

    printf("\n");

    printf("Valor variável NUM1 = %d\n", num1);
    resultado = --num1;
    printf("Após pré-decremento: %d\n", resultado);

    printf("\n");

    printf("Valor variável NUM1 = %d\n", num1);
    resultado = num1-- ;
    printf("Após pós-decremento: %d\n", resultado);

    printf("\n");

    return 0 ;


}