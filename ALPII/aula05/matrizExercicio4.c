#include <stdio.h>
int main(){
    
    int matriz[3][2];
    int i, j, cont;
    
    cont = 0;
    
    for(i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
            printf("Insira o valor da linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10){
                cont ++;
            }
        }
    }
    
    printf("%d numeros na matriz maiores do que 10", cont);
    
    return 0;    
}
