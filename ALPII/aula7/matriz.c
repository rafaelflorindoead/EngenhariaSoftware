#include<stdio.h>
int main(){
	int i, j, k, mat[5][6];
	k = 1;
	for(i= 0; i < 4; i++){
		for(j= 0; j < 4; j++){
			if ((i % 2 == 1) && (j % 2 == 1)){
				mat[i][j] = k;
				k++;
			}else{
				mat[i][j] = 0;
			}
		}	
	}
	for(i= 0; i < 4; i++){
		for(j= 0; j < 4; j++){
			printf("[%d][%d] = %d", i, j, mat[i][j]);
		}	
		printf("\n\n");
	}
	return 0;
}
