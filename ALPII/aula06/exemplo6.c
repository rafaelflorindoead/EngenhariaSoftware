#include<stdio.h>

float salarioReajustado(float salario);
int main(){
	float salarioFuncionario, novoSalario;
	printf("Entre com o salário. ");
	scanf("%f", &salarioFuncionario);
	novoSalario = salarioReajustado(salarioFuncionario);
	printf("Salario antes do reajuste R$ %5.2f", salarioFuncionario);
	printf("Salario depois do reajuste R$ %5.2f", novoSalario);
	int i;
	for(i=1; i<100; i=i+2)
		printf("%d",i);
}
float salarioReajustado(float salario){
	float reajuste;
	if (salario < 300){
		reajuste = (salario*50)/100;
		salario = salario + reajuste;
	}else if(salario > 300){
		reajuste = (salario*50)/100;
		salario = salario + reajuste;
	}else{
		printf("Salário fora da faixa de reajuste");
	}
	return salario;
}
