#include<stdio.h>
#include<stdlib.h>
//Given a positive number n > 1 find the prime factor decomposition of n.
char* factors(int lst){
	int primes[100][2];
	int pcounter = 0;
	for(int i=2; i<=lst;i++){
		if(lst%i==0){
			int power=0;
			while(lst%i==0){
				lst /= i;
				power++;
			}
			primes[pcounter][0] = i;
			primes[pcounter][1] = power;
			pcounter++;
		}
	}
	char* result = malloc(pcounter*10);
	int pos = 0;
	for(int i=0;i<pcounter;i++){
		if(primes[i][1]==1){
			pos += sprintf(result+pos, "(%d)", primes[i][0]);
			
		}
		else{
			pos += sprintf(result+pos, "(%d**%d)", primes[i][0], primes[i][1]);
		}
	}
	return result;
}
int main(void){
	printf("Enter number:");
	int number;
	scanf("%d",&number);
	printf("%s\n", factors(number));
	return 0;
}
