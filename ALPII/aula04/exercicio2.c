#include<stdio.h>
int main(){
	int anoNascimento, anoAtual, idade;
	
	printf("Entre com o ano de nascimento: ");
	scanf("%d", &anoNascimento);
	printf("Entre com o ano Atual: ");
	scanf("%d", &anoAtual);
	idade = anoAtual - anoNascimento;
	printf("Idade = %d", idade);
	if(idade >= 16){
		printf("\nVoc� pode votar");
	}else{
		printf("\nVoc� nao precisa votar");
	}
	if(idade >= 18){
		printf("\nVoc� pode dar entrada na habilita��o");
	}else{
		printf("\nVoc� n�o pode dar entrada na habilita��o");
	}
	return 0;
}
