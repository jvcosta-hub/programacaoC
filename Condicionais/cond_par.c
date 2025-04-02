#include <stdio.h>

int main(){
    int numero;
        printf("Digite um número: ");
            scanf("%d", &numero);

                if(numero % 2 == 0){
                    printf("\nO número é Par!\n");
                }
                if(numero % 2 == 1){
                    printf("\nO número é Impar!\n");
                }
                    return 0;


}
