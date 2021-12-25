#include<stdio.h>
/*
Count the number of divisors of a positive integer n.
*/
int divisors(int n){
	int counter = 0;
	for(int i=1; i<=n;i++){
		if(n%i==0) counter++;
	}	
	return counter;
}
int main(void){
	printf("Enter number:\n");
	int n;
	scanf("%d", &n);
	printf("Amount of divisors: %d\n", divisors(n));
	return 0;
}
