#include <stdio.h>
int main(){
//Criança < 12
//Adolescente 12 <= x , 18
//Adulto 18 <=
//Idoso 60 <

int idade;

printf("Digite sua idade: ");
scanf("%d", &idade);

    if(idade < 12){
    printf("Pra mim vc é CRIANÇA !\n");
    } else if(idade >= 12 && idade < 18 ){
    printf("Pra mim vc é ADOLESCENTE!\n");
    } else if(idade >= 18 && idade < 60){ 
    printf("Para mim vc é ADULTO!\n");
    } else {
    printf("Para mim vc é IDOSO!\n");
    }

return 0;

}
