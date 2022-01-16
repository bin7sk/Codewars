#include<stdio.h>
#include<stdlib.h>
/*
It should remove all values from list a, which are present in list b keeping their order.
*/
int* array_diff(const int *arr1, size_t n1, const int* arr2, size_t n2, size_t* z){
	*z = n1;
	for(size_t i=0; i<n1; i++){
		for(size_t j=0;j<n2;j++){
			if(arr1[i]==arr2[j]){
				(*z)--;
				break;
			} 		
		}
	}
	int* ptr = malloc(*z * sizeof(int));
	int counter = 0;
	for(size_t i=0; i<n1; i++){
		int wr=1;
		for(size_t j=0;j<n2;j++){
			if(arr1[i]==arr2[j]){
				wr = 0;
				break;
			}
		}
		if(wr){
			ptr[counter] = arr1[i];
			counter++;
		}
	}
	return ptr;
}
int main(void){

	return 0;
}
