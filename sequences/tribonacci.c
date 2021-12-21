#include<stdio.h>
#include<stdlib.h>
//Tribonacci Sequence
long long* tribonacci(const long long signature[3], size_t n){
	if(n==0) return NULL;
	long long* array = malloc(sizeof(long long) * n);
	for(int i = 0; i<3; i++) array[i] = signature[i];
	for(int i = 3; i<n; i++){
		array[i] = array[i-3] + array[i-2] + array[i-1];}
	return array;
}
int main(void){
	long long array[3];
	size_t n;
	do{
	printf("Enter 3 integers(tribonacci signature) and size of sequence:\n");}
	while(4 != scanf("%lld%lld%lld%zd", array, array + 1, array + 2, &n));
	long long *r;	
	r = tribonacci(array, n);
	for(int i =0; i<n; i++){
		printf("%d ", r[i]);
	}	
	putchar('\n');
	return 0;
}
