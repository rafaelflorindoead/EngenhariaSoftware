#include<stdio.h>
int main(){
	char nome[30];
	int cont;
	
	printf("Informe o seu nome: ");
	scanf("%s", nome);
	
	cont = 5;
	while(cont > 0){
		printf("%d - Seu nome = %s\n", cont, nome);
		cont--;
	}
	
	return 0;
}
