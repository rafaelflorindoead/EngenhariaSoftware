#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");    
    int n1;
    printf("Entre com o primeiro n�mero: ");
    scanf ("%d",&n1);
	switch(n1){
		case 1:
			printf("Valor v�lido = %d", n1);
			break;
		case 5:
			printf("Valor v�lido = %d", n1);
			break;
		case 10:
			printf("Valor v�lido = %d", n1);
			break;
		default:
			printf("Valor Inv�lido");
	}
	return 0;
}
