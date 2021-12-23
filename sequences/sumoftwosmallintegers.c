#include<stdio.h>
/*
Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers. 
No floats or non-positive integers will be passed.
 */
long sum_two_smallest_numbers(size_t n, const int numbers[n]){
	int min1, min2;
	min1=numbers[0];
	min2=numbers[1];
	for(int i=1;i<n;i++){
		if(min1>numbers[i]){
			min2 = min1;
			min1 = numbers[i];
		}
		else{
			if(min2>numbers[i]) min2 = numbers[i];
		}
	}
	long sum = min1 + (long)min2;
	return sum;
}
int main(void){
	int arr[] = {9, 9, 6, 5, 4, 6, 4, 2 ,1};
	printf("%lld\n", sum_two_smallest_numbers(sizeof(arr)/sizeof(int), arr));
	return 0;
}
