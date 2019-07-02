#include <stdio.h>
#include <stdlib.h>

int preenche(int matrizA[6][4]);
float somaMedia(int matrizA[6][4]);
int imprimir(int matrizA[6][4]);

int main (){
	system("cls");
	int matrizA[6][4];
	
	preenche(matrizA);
	imprimir(matrizA);
	printf("\nMedia = %.2f", somaMedia(matrizA));
	printf("\n\n");
	system("Pause");
	return 0;
}
int preenche(int matrizA[6][4]){
	int i,j;
	
	for(i=0; i<6; i++){
		for(j=0; j<4; j++){
			printf("[%d][%d]: ", i+1, j+1);
			scanf("%d", &matrizA[i][j]);
		}	
	}
}
int imprimir(int matrizA[6][4]){
	int i, j;
	for(i=0; i<6; i++){
		for(j=0; j<4; j++){
			printf("\t[%d][%d] = %d", i+i, j+i, matrizA[i][j]);
		}	
		printf("\n");
	}
}
float somaMedia(int matrizA[6][4]){
	int i,j,k;
	k=0;
	float soma = 0;
	for(i=0; i<6; i++){
		for(j=0; j<4; j++){
			soma = soma + matrizA[i][j];
			k++;
		}	
	}
	float media = soma/k;
	return media;
}
