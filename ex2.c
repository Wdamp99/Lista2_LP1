#include <stdio.h>
#include <limits.h>

int main(){
	int n, m;
	
	printf("Digite a qtd de linhas: ");
	scanf("%d", &n);
	printf("Digite a qtd de colunas: ");
	scanf("%d", &m);
	
	int mat[n][m], i, j, menor = INT_MAX;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &mat[i][j]);
			if(mat[i][j] < menor){
				menor = mat[i][j];
			}
		}
	}
	
	printf("Menor: %d", menor);
	return 0; 
}
