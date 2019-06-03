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
		printf("\nVocê pode votar");
	}else{
		printf("\nVocê nao precisa votar");
	}
	if(idade >= 18){
		printf("\nVocê pode dar entrada na habilitação");
	}else{
		printf("\nVocê não pode dar entrada na habilitação");
	}
	return 0;
}
