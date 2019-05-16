#include<stdio.h>
int main(){
	float salarioLiquido, salarioBruto, desconto;
	printf("Informe o seu salario bruto: ");
	scanf("%f", &salarioBruto);
	desconto = (salarioBruto * 11)/100;
	salarioLiquido = salarioBruto - desconto;
	printf("Salario Bruto = %.2f, com o desconto de %.2f, resultara em %.2f", salarioBruto, desconto, salarioLiquido);
	return 0;
}
