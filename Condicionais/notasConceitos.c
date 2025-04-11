#include <stdio.h>
int main(){

// A >= 90
// B >= 80
// C >= 70
// D >= 60
// E >= 50
// F < 50

float nota;

printf("Digite a nota: ");
scanf("%f", &nota);

if(nota >= 90){
printf("O coneceito é A!\n");
} else if(nota >= 80){
printf("O conceito é B!\n");
} else if(nota >= 70){
printf("O cenceito é C!\n");
} else if(nota >= 60){
printf("O conceito é D!\n");
} else{
printf("O cenceito infelizmente é menor que 59, foi reprovado!\n");}

return 0;


}
