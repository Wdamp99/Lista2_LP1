#include <stdio.h>

int main(){
	int n, m;
	double x;
	
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%lf", &x);
	
	
	
	int mat[n][m], i, j, mult = 0; 
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &mat[i][j]);
			}
	}
	
	system("cls");
		
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			mult = mat[i][j] * x;
			printf("%d ", mult);		
		}
		printf("\n");
	}
	
	return 0; 
}
