#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");    
    int n1, n2, n3;
    printf("Entre com o primeiro n�mero: ");
    scanf ("%d",&n1);
    printf("Entre com o primeiro n�mero: ");
    scanf ("%d",&n2);
    printf("Entre com o primeiro n�mero: ");
    scanf ("%d",&n3);
	if (n1 == n2) {
        if (n2 == n3) {
            printf ("Os tr�s valores s�o iguais [n1=n2=n3].");
        }else{
            printf ("H� dois valores iguais e um diferente [n1=n2] - [n2<>n3].");
        }
    }else{ 
        if (n1 == n3) {
            printf ("H� dois valores iguais e um diferente [n1=n3] [n1<>n2].");
        }else{
            if (n2 == n3) {
                printf ("H� dois valores iguais e um diferente [n2=n3] [n1<>n3] [n1<>n2].");
            }else{
                printf("Todos os valores s�o diferente[n1<>n2<>n3].");
            }
        }
    }
    return 0;
}
