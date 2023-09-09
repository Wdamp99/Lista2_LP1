#include <stdio.h>

int main(){
	int n, m;
	
	printf("Digite a qtd de linhas: ");
	scanf("%d", &n);
	printf("Digite a qtd de colunas: ");
	scanf("%d", &m);
	
	int mat[n][m], i, j; 
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &mat[i][j]);
		}
	}
	
	int aux = m - 1;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(j == aux){
				printf("%d | ", mat[i][j]);
				aux--;
			} else{
				printf("  | ");
			}
		}
		printf("\n");
	}
	
	return 0; 
}
