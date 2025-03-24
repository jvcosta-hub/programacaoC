#include <stdio.h>

//sizeof ira imprimir os valores das variáveis em bytes.

int main(){
    printf("Tamanho de int: %u bytes\n", sizeof(int));
    printf("Tamanho de long int: %u bytes\n", sizeof(long int));
    printf("Tamanho de long long int: %u bytes\n", sizeof(long long int));
    printf("Tamanho de double: %u bytes\n", sizeof(double));
    printf("Tabamnho de long double: %u bytes\n", sizeof(long double));

    return 0;


}