#include <stdio.h>
// E lógico (&&)
// OU lógico (||)
// NÃO lógico (!)

int main(){

// Teste &&

int a = 3 , b = 1;
printf("________________________________________\n");
printf("\nExercício testing E Lógico (&&):\n");
if (a > 5 && b > 5){
    printf("As duas condições são verdadeiras!\n");
} else{
    printf("Uma ou ambas condições são falsas!\n");
}

// Teste &&

int c = 3 , d = 6;
printf("________________________________________\n");
printf("\nExercício testing OU Lógico (||):\n");
if (c > 5 || d > 5){
    printf("Uma ou duas condições são verdadeiras!\n");
} else{
    printf("Ambas condições são falsas!\n");
}

int e = 5;
printf("________________________________________\n");
    printf("\nExercício testing NÃO (!):\n");
if (!(e > 0)){
    printf("Condição Verdadeira!\n");
}else{
    printf("Condição é Falsa!\n");
}
printf("________________________________________\n");



    return 0;

}
