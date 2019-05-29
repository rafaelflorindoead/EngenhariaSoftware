#include<stdio.h>
int main(){
	float vendas;
	float acumularVendas;
	int cont = 0;
	
	printf("Informar o valor da venda: ");
	scanf("%f", &vendas);
	acumularVendas = 0;
	while(vendas != 0){
		acumularVendas = acumularVendas + vendas;
		printf("Informar o valor da venda: ");
		scanf("%f", &vendas);
		cont++;
	}
	printf("Foram realizadas %d vendas.\n", cont);
	printf("Montante = %.2f", acumularVendas);
	float mediaVendas = acumularVendas / cont;
	printf("Media de vendas = %.2f", mediaVendas);
	return 0;
}
