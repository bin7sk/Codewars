#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Complementary DNA
*/
char *dna_strand(const char *dna){
	size_t len;
	len = strlen(dna);
	if(len==0) return NULL;
	char *result = malloc((len+1)*sizeof(char));
	int error = 0;
	for(size_t i = 0;(i < len) && !error; i++){
		switch(dna[i]){
			case 'A':
				result[i] = 'T';
				break;
			case 'T':
				result[i] = 'A';
				break;
			case 'C':
				result[i] = 'G';
				break;
			case 'G':
				result[i] = 'C';
				break;
			default:
				error=1;
				break;
		}
	}
	if(error){
		size_t i;
		for(i = 0;i < len; i++){
			if(dna[i]!='A' && dna[i]!='T' && dna[i]!='C' && dna[i]!='G'){
				result[i]='\0';
				break;
			}
			result[i] = dna[i];
		}
		return result;
	}
	result[len+1]='\0';

	return result;
}
int main(void){
	printf("Enter DNA string:\n");
	char * DNA[1000];
	scanf("%s", DNA);
	printf("Output:\n%s\n", dna_strand(DNA));
	return 0;
}
