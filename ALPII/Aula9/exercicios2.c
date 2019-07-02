#include <stdio.h>
#include <stdlib.h>

int preenche(int matrizA[3][3]);
int multiplicar(int matrizA[3][3]);
int imprimir(int matrizA[3][3]);

int main (){
	system("cls");
	int matrizA[3][3];
	
	preenche(matrizA);
	printf("\nMatriz Original.\n");
	imprimir(matrizA);
	multiplicar(matrizA);
	printf("\nMatriz Resultante.\n");
	imprimir(matrizA);

	printf("\n\n");
	system("Pause");
	return 0;
}
int preenche(int matrizA[3][3]){
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("[%d][%d]: ", i+1, j+1);
			scanf("%d", &matrizA[i][j]);
		}	
	}
}
int imprimir(int matrizA[3][3]){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("\t[%d][%d] = %d", i+i, j+i, matrizA[i][j]);
		}	
		printf("\n");
	}
}
int multiplicar(int matrizA[3][3]){
	int i,j;

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if (matrizA[i][j] % 2 == 0){
				matrizA[i][j] = matrizA[i][j] * 3; 
			}else{
				matrizA[i][j] = matrizA[i][j] * 2;
			}
		}	
	}
}
