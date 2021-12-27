#include<stdio.h>
#include<stdlib.h>
/*
Given a number, say prod (for product), we search two Fibonacci numbers F(n) and F(n+1) verifying
F(n) * F(n+1) = prod.
*/
typedef unsigned long long ull;
unsigned long long* productFib(ull prod){
	ull *fib = malloc(sizeof(ull)*3);
	fib[0] = 0; fib[1] = 1; fib[2] = 0;
	while(1){
		ull m = fib[0] * fib[1];
		if(m==prod){
			fib[2] = 1;
			return fib;
		}
		else if(m>prod) return fib;
		ull sum = fib[0] + fib[1];
		fib[0] = fib[1];
		fib[1] = sum;
	}

}
int main(void){
	ull prod;
	printf("Enter number:");
	scanf("%llu", &prod);
	ull *res = productFib(prod);
	printf("%llu %llu %llu\n", res[0], res[1], res[2]);
	return 0;
}
