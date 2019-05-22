#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"");    
    int n1, n2, n3;
    printf("Entre com o primeiro número: ");
    scanf ("%d",&n1);
    printf("Entre com o primeiro número: ");
    scanf ("%d",&n2);
    printf("Entre com o primeiro número: ");
    scanf ("%d",&n3);
	if (n1 == n2) {
        if (n2 == n3) {
            printf ("Os três valores são iguais [n1=n2=n3].");
        }else{
            printf ("Há dois valores iguais e um diferente [n1=n2] - [n2<>n3].");
        }
    }else{ 
        if (n1 == n3) {
            printf ("Há dois valores iguais e um diferente [n1=n3] [n1<>n2].");
        }else{
            if (n2 == n3) {
                printf ("Há dois valores iguais e um diferente [n2=n3] [n1<>n3] [n1<>n2].");
            }else{
                printf("Todos os valores são diferente[n1<>n2<>n3].");
            }
        }
    }
    return 0;
}
