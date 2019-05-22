#include<stdio.h>
int main(){
	int valor;
	
	printf("Entre com um numero: ");
	scanf("%d", &valor);
	if (valor >= 0){
		printf("Valor valido, numero informado = %d", valor);
	}else{
		printf("Valor invalido, numero informado = %d", valor);
	}	
	return 0;
}
