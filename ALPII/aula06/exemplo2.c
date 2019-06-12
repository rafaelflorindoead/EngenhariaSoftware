#include<stdio.h>
#include<locale.h>
int verificarExcesso(int via, float velocidade){
	switch(via){
		case 1:
			if (velocidade > 80) return 1;			
			break;
		case 2:
			if (velocidade > 60) return 1;
			break;
		case 3:
			if (velocidade > 40) return 1;
			break;
		case 4:
			if (velocidade > 30) return 1;
			break;
		case 5:
			if (velocidade > 110) return 1;	
			break;
		case 6:
			if (velocidade > 100) return 1;
			break;
		case 7:
			if (velocidade > 90) return 1;	
			break;
		case 8:
			if (velocidade > 60) return 1;	
			break;
		default:
			printf("Via inválida!");
	}
	return 0;
}
void menu(){
	int i;
	for (i=0;i<80;i++) printf("*");
	printf("\nI – VIAS URBANAS:");
	printf("\n1 - 80 km/h, nas vias de trânsito rápido:");
	printf("\n2 - 60 km/h, nas vias arteriais");
	printf("\n3 - 40 km/h, nas vias coletoras");
	printf("\n4 - 30 km/h, nas vias locais");
	printf("\nII – VIAS RURAIS");
	printf("\n5 - 110 km/h nas rodovias de pista dupla para: automóveis, camionetas e motocicletas;");
	printf("\n6 - 100 km/h nas rodovias de pista simples para: automóveis, camionetas e motocicletas");
	printf("\n7 - 90 km/h para os demais veículos");
	printf("\n8 - 60 km/h nas estradas:\n");
	for (i=0;i<80;i++)	printf("*");
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	int via;
	float velocidade;
	
	menu();
	printf("\nEscolha uma opção do menu: ");
	scanf("%d", &via);
	printf("\nInforme a velocidade: [Ex: 110,53] ");
	scanf("%f", &velocidade);
	int retorno = verificarExcesso(via, velocidade);
	if (retorno){
		printf("\nExcesso de velocidade!!!(%3.2f) km/h", velocidade);
	}else{
		printf("\nBoa viagem");
	}
	return 0;
}
