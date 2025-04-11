#include <stdio.h>
int main(){
//Criança < 12
//Adolescente 12 <= x , 18
//Adulto 18 <=

int idade;

printf("Digite sua idade: ");
scanf("%d", &idade);

    if(idade < 12){
    prinf("Pra mim vc é CRIANÇA !");
    } else if(idade >= 12 && idade < 18 ){
    printf("Pra mim vc é ADOLESCENTE!");
    } else { 
     printf("Para mim vc é VELHINHO!");
    } 

return 0;

}
