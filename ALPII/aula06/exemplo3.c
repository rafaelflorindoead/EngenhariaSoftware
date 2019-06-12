#include<stdio.h>
void cabecalho(){
	int i;
	for (i=0;i<80;i++)
		printf("*");
	printf("\n*Controle de clientes*\n");
	for (i=0;i<80;i++)
		printf("*");
}
void menu(){
	printf("\n*************************\n");
	printf("1 - Cadastrar            \n");
	printf("2 - Alterar              \n");
	printf("3 - Excluir              \n");
	printf("4 - Listar               \n");
	printf("*************************\n");
}
int main(){
	cabecalho();
	menu();
}
