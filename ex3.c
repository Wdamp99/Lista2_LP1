#include <stdio.h>

int main(){
	int n, m, x;
	
	printf("Digite a qtd de linhas: ");
	scanf("%d", &n);
	printf("Digite a qtd de colunas: ");
	scanf("%d", &m);
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	
	int mat[n][m], i, j, cont = 0; 
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &mat[i][j]);
			if(mat[i][j] == x){
				cont++;
			}
		}
	}
	
	printf("Existe(m) %d num(s) %d.", cont, x);
	return 0; 
}
