#include<stdio.h>
#include<stdlib.h>
/*
Find all integers between m and n (m and n integers with 1 <= m <= n) such that the sum of their squared divisors is itself a square.

*/
typedef struct Pair Pair;

struct Pair {
	long long first;
	long long snd;
};
int issquare(long long number){
	if(number==1) return 1;
	for(long long i=1;i<=number/2;i++){
		if(i*i==number) return 1;
		if(i*i>number) return 0;
	}
	return 0;
}

Pair** listSquared(long long m, long long n, int* length){
	Pair **pairs = malloc((n-m) * sizeof(Pair*));
	*length = 0;
	for(long long number = m; number<=n; number++){
		long long sum = 0;
		for(long long div=1;div<=number;div++){
			if(number%div==0) sum += div*div;
		}
		if(number==1) sum = 1;
		if(issquare(sum)){
			pairs[*length] = malloc(sizeof(Pair));
			pairs[*length] -> first = number;
			pairs[*length] -> snd = sum;
			(*length)++;
		}
	}
	return pairs;
}
int main(void){
	int length;
	Pair **p = listSquared(1,250, &length);
	for(int i=0;i<length;i++){
		printf("[%lld, %lld], ", p[i]->first, p[i]->snd);
	}
	putchar('\n');
	return 0;
	
}
