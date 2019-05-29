#include<stdio.h>
int main(){
	char nome[30];
	int cont;
	
	printf("Informe o seu nome: ");
	scanf("%s", nome);
	
	for(cont = 5; cont > 0; cont--){
		printf("%d - Seu nome = %s\n", cont, nome);
	}
	
	return 0;
}
