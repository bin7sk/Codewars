#include<stdio.h>
#include<stdlib.h>
//to create NxN multiplication table, of size provided in parameter.
int **multiplication_table(int n){
	int **table = malloc(sizeof(int *) *n);
	for(int i=0;i<n;i++){
		table[i] = (int *) malloc(sizeof(int) *n);
	}
	for(int i=0; i<n; i++){
		int *arr = table[i];
		for(int j=0;j<n;j++){
			arr[j] = (i + 1) * (j + 1);
		}
	}
	return table;
}

int main(void){
	printf("Enter size of multiplication table:\n");
	int n;
	scanf("%d", &n);
	int **table = multiplication_table(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t", table[i][j]);
		}
		putchar('\n');
	}
	free(table);
	return 0;
}
