#include<stdio.h>
#include<stdbool.h>
/*
Given two arrays a and b write a function comp(a, b) (orcompSame(a, b)) that checks whether the two arrays have the "same" elements, with the same multiplicities (the multiplicity of a member is the number of times it appears). 
"Same" means, here, that the elements in b are the elements in a squared, regardless of the order.
*/
bool comp(const int *a, const int *b, size_t n){
	for(size_t i=0;i<n;++i){
		int counter=0;
		for(size_t j=0;j<n;j++){
			if(a[i]==a[j]) counter++;
		}
		int squared = a[i] * a[i];
		for(size_t j=0;j<n;j++){
			if(squared==b[j]){
				counter--;
			}
			if(j==(n-1)){
				if(counter!=0) return false;
			} 
		}
	}
	return true;
}
int main(){

	int a[] = {121, 144, 19, 161, 19, 144, 19, 11};
	int b[] = {121, 14641, 20736, 361, 25921, 361, 20736, 361};
	printf(comp(a,b,sizeof(a)/sizeof(int)) ? "True":"False");
	putchar('\n');
	return 0;	
}
