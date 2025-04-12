#include <stdio.h>
/*
Vamos criar agor aum programa que verifica s euma pessoa esta qualificada para um desconto
especial com base na idade e na renda mensal. A pessoa deve ter mais de 60 anos ou menos de 18
ter uma renda mensal abaixo de R$ 2.000,00 e ter um número abaixo de 2 dependentes.
*/
int main() {
  int idade, dependentes;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: ");
  scanf("%f", &renda);
  printf("Digite a quantidade de dependentes: ");
  scanf("%d", &dependentes);	

	if(idade < 18 || idade > 60) {
		if(renda < 2000) {
			if(dependentes < 2) {
				printf("Credito aprovado com sucesso!\n");
			} else{
				printf("Credito negado ! Não passou no critério dependentes!\n");
			}
		} else{
			printf("Credito negado ! Não passou no critério renda!\n");
		}
	} else{
		printf("Credito negado ! Não passou no critério idade!\n");
	}

}