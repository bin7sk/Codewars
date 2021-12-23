#include<stdio.h>
#include<inttypes.h>
/*
Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. 
Essentially, rearrange the digits to create the highest possible number.
*/
uint64_t descendingOrder(uint64_t n){
	char s[20];
	int i = 0;
	while(n){
		s[i] = '0' + n%10;
		n /= 10;
		i++;
	}
	--i;
	uint64_t ret = 0;	
	for(int k = 0; k<=i; k++){
		uint64_t max;
		uint64_t pos;
		max = s[k];
		pos = k;
		for(int l = k+1; l<=i; l++){
			if(s[l]>max){
				max = s[l];
				pos = l;
			}
		}
		uint64_t tmp;
		if(k!=pos){
			tmp = s[k];
			s[k] = s[pos];
			s[pos] = tmp;

		}
		ret *= 10;
		ret += s[k] - '0';	
	}
	return ret;
}
int main(void){
	printf("Enter number:\n");
	uint64_t num;
	scanf("%lld", &num);
	printf("Result : %lld\n", descendingOrder(num));
	return 0;
}
