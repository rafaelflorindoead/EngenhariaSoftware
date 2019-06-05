#include<stdio.h>
int main(){
	int vetorIdade[]={45, 23, 15, 14, 52};
	int somaIdade = 0;
	int i;
	for(i=0; i<5; i++){
		somaIdade = somaIdade + vetorIdade[i];
	}
	float mediaIdade = somaIdade/5;
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
