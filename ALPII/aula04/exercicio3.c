#include<stdio.h>
#include<math.h>
int main(){
	float peso, altura, imc;
	
	printf("Entre com o seu peso. ");
	scanf("%f", &peso);
	printf("Entre com a sua altura. ");
	scanf("%f", &altura);
	//imc = peso / (altura * altura);
	imc = peso / pow(altura, 2);
	printf("IMC = %f", imc);
	return 0;
}
