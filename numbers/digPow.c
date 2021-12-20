#include<stdio.h>
/*
Given a positive integer n written as abcd... (a, b, c, d... being digits) and a positive integer p

we want to find a positive integer k, if it exists, such as the sum of the digits of n taken to the successive powers of p is equal to k * n
*/
int digPow(int n, int p){
	int arr[100] = {0};
	int tmp = n;
	int i;
	for(i=0;i<100 && tmp; i++){
		arr[i]=tmp % 10;
		tmp /= 10;
	}
	--i;
	for(int j = i;j>=0;j--){
		tmp = p + (i - j);
		int a = arr[j];
		while(tmp>1){
			arr[j] *= a;
			tmp--;
		}
	}
	int s = 0;
	for(;i>=0;i--) s += arr[i];
	int r = 1;
	for(tmp=n;tmp<=s;tmp+=n){
		if(tmp==s) return r;
		++r;
	}	
	return -1;

}
int main(){
	int n,p;
	printf("Enter number:\n");
	scanf("%d",&n);
	printf("Enter power:\n");
	scanf("%d",&p);
	printf("Counted:\n%d\n", digPow(n, p));

}

