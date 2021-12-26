#include<stdio.h>
int factorial(int n){
  if(n<0) return -1;
	int fact=1;
  while(n>1){
    int tmp = fact;
    fact *=n;
    if (tmp > fact) return -1;
    n--;
  }
  return fact;
}
int main(void){
	int number;
	printf("Enter number:");
	scanf("%d", &number);
	printf("Factorial: %d\n", factorial(number));
	return 0;
}

