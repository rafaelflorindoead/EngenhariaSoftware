#include<stdio.h>

int main(){
	int x=4, y=5;
	printf("\n%d - %d", x, y);
	printf("\n%d - %d", &x, &y);
	troca(&x, &y);
	printf("\n%d - %d", &x, &y);
}

void troca(int *end_x, int *end_y) {
	int aux;
	aux = *end_x;
	*end_x = *end_y;
	*end_y = aux;
}
