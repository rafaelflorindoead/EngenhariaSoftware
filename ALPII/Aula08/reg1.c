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
	cadPessoa.codigo =  1;
	strcpy(cadPessoa.nome, "Rafael");
	printf("CODIGO - NOME\n");
	printf("   %d  ", cadPessoa.codigo);
	printf(" - %s", cadPessoa.nome);
	printf("\n\n");
	system("Pause");
	return 0;
}
