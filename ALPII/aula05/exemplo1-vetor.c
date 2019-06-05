#include<stdio.h>
int main(){
	int vetorIdade[5];
	int somaIdade = 0;
	float mediaIdade;
	int i;
	for(i=0; i<5; i++){
		printf("Entre com a idade %d: ", i+1);
		scanf("%d", &vetorIdade[i]);
		somaIdade = somaIdade + vetorIdade[i];
	}
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
