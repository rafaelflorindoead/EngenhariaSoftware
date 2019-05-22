#include<stdio.h>
int main(){
	int ano_nascimento, ano_atual, idade;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &ano_nascimento);
	printf("Informe o ano atual: ");
	scanf("%d", &ano_atual);
	idade = ano_atual - ano_nascimento;
	printf("Para quem nasceu em %d, terá %d anos em %d", ano_nascimento, idade, ano_atual);
	return 0;
}
