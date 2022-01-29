#include<stdio.h>
unsigned long long square_digits(unsigned n){
	unsigned long long r = 0;
	unsigned long long len = 0;

	unsigned long long mod10;
	mod10 = n%10;
	n /= 10;
	mod10 *= mod10;
	if(mod10==0) len++;
   for(unsigned long long t = mod10;t;len++, t/=10) 
			;
	r += mod10;	

	while(n){
		mod10 = n%10;
		n /= 10;
		if(mod10 == 0){
			len++;
			continue;
		}
		mod10 *= mod10;
	    unsigned long long ten = 1;
		for(unsigned long long l = len; l; l--, ten*=10) 
			;
   		 for(unsigned long long t = mod10;t;len++, t/=10) 
			;
		mod10 *= ten;
		r += mod10;	
	}
	return r;	
}
int main(void){
	unsigned n;
	scanf("%u", &n);
	printf("%llu\n", square_digits(n));
	return 0;
}
