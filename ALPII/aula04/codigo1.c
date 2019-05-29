#include<stdio.h>
int main(){
	char nome[30];
	int cont;
	//1 2 3 4
	printf("Informe o seu nome: ");
	scanf("%s", nome);
	for(cont = 1; cont <= 5; cont++){
		printf("Seu nome = %s\n", nome);
	}
	return 0;
}
