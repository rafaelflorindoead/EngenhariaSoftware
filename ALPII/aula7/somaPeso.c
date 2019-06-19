#include<stdio.h>
int main(){
	float peso[10];
	float somaPeso, media;
	int i;
	somaPeso=0;	
	for (i = 0; i<10; i++){
		printf("Entre com o peso [%d]", i + 1);
		scanf("%f", &peso[i]);
		somaPeso = somaPeso + peso[i];
	}
	media = somaPeso/10;
	printf("\nSoma dos Pesos = %.2f", somaPeso);
	printf("\nMedia dos Pesos = %.2f", media);
	return 0;
}
