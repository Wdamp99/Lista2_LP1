#include <stdio.h>

int main(){
	int n1, m1, n2, m2;
	
	scanf("%d", &n1);
	scanf("%d", &m1);
	scanf("%d", &n2);
	scanf("%d", &m2);
	
	if(n1 != n2 || m1 != m2) {
		printf("ERRO: As matrizes devem ser de mesma ordem.");
	} else{
	
		int mat1[n1][m1], mat2[n2][m2], i, j, soma = 0; 
		for(i = 0; i < n1; i++){
			for(j = 0; j < m1; j++){
				scanf("%d", &mat1[i][j]);
			}
		}
		
		for(i = 0; i < n2; i++){
			for(j = 0; j < m2; j++){
				scanf("%d", &mat2[i][j]);		
			}
		}
		
		system("cls");
		
		for(i = 0; i < n1; i++){
			for(j = 0; j < m1; j++){
				soma = mat1[i][j] + mat2[i][j];
				printf("%d ", soma);		
			}
			printf("\n");
		}
	}	
	return 0; 
}
