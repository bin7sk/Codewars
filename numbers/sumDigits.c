#include<stdio.h>
/*
Write a function named sumDigits which takes a number as input and returns the sum of the absolute value of each of the number's decimal digits.
*/
int sum_digits(int n){
	int sum = 0;
	if(n<0) n *= -1;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int main(void){
	int number;
	printf("Enter number: ");
	scanf("%d", &number);
	printf("sum of digits = %d\n", sum_digits(number));
	return 0;
}

