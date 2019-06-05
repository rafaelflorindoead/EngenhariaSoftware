#include<stdio.h>
int main(){
	int vetorIdade[5];
	int somaIdade = 0;
	float mediaIdade;
	printf("Entre com a idade 1: ");
	scanf("%d", &vetorIdade[0]);
	somaIdade = somaIdade + vetorIdade[0];
	printf("Entre com a idade 2: ");
	scanf("%d", &vetorIdade[1]);
	somaIdade = somaIdade + vetorIdade[1];
	printf("Entre com a idade 3: ");
	scanf("%d", &vetorIdade[2]);
	somaIdade = somaIdade + vetorIdade[2];
	printf("Entre com a idade 4: ");
	scanf("%d", &vetorIdade[3]);
	somaIdade = somaIdade + vetorIdade[3];
	printf("Entre com a idade 5: ");
	scanf("%d", &vetorIdade[4]);
	somaIdade = somaIdade + vetorIdade[4];
	mediaIdade = somaIdade/5;
	printf("Media = %.f", mediaIdade);
	
	if (mediaIdade > 18){
		printf("Prova de nivel Dificil.");
	}else if(mediaIdade > 15){
		printf("Prova de Nivel Medio.");
	}else{
		printf("Prova de Nivel facil.");
	}
	return 0;
}
