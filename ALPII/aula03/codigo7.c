#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");
    int codigo;

    printf("\n1 - Alimento n�o perec�vel");
    printf("\n2, 3, 4 - Alimento perec�vel");
    printf("\n5, 6 - Vestu�rio");
    printf("\n7 - Higiene Pessoal");
	printf("\nEntre com o c�digo");
	scanf("%d", &codigo);
	
	switch(codigo){
	
		case 1:
		    printf ("Alimento n�o perec�vel");
		    break;
		case 2:
		case 3:
		case 4:
			printf("Alimento perec�vel");
			break;
		case 5:
		case 6:
			printf("Vestu�rio");
			break;
		case 7:
			printf("Higiene Pessoal");
			break;
		default:
			printf("Inv�lido");
	}
}
