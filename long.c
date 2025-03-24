#include <stdio.h>

int main(){

        int numeroNormal = 2147483647; // Valor máximo de int
        long int numeroGrande = 2147483647;
        double numeroPreciso = 3.144159265;
        long long double numeroMuitoPreciso = 3.141592653589793238463;

        printf("Numero regular (int): %d\n", numeroNormal);
        printf("Numero grande (long int): %l\n", numeroGrande);

        numeroGrande = 2147483648; // Valor maior que o máximo de int
        printf("Número grande atualizado (long int): %ld\n", numeroGrande);


        printf("Numero preciso (double): %.15\n", numeroPreciso);
        printf("Numero muito preciso (long double): %.21lf\n", numeroMuitoPreciso);



        return 0;


}