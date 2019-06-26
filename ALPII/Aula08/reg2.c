#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Pessoa
{
	int codigo;
	char nome[30];
};
struct Pessoa cadPessoa;
int main(){
	printf("Informe o Código\n");
	fflush(stdin);
	scanf("%d", &cadPessoa.codigo);
	printf("Informe o nome\n");
	fflush(stdin);
	gets(cadPessoa.nome);
	printf("CODIGO - NOME\n");
	printf("   %d  ", cadPessoa.codigo);
	printf(" - %s", cadPessoa.nome);
	printf("\n\n");
	system("Pause");
	return 0;
}
