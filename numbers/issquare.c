#include<stdio.h>
#include<stdbool.h>

bool is_square(int n){
	if(n<0) return false;
	for(int i=0;i<=n;i++){
		int square = i*i;
		if(square == n) return true;
		if(square>n) break;
	}
	return false;
}

int main(void){
	printf("Enter number to check if its square number:\n");
	int n;
	scanf("%d", &n);
	fputs(is_square(n) ? "True\n" : "False\n", stdout);
	return 0;
}
