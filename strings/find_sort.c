#include<stdio.h>
#include<sys/types.h>
#include<string.h>
//given a string of words, return the length of the shortest word(s)
int is_whitespace(char x){
	if(x == ' ' || x=='\t' || x=='\n')
		return 1;
	return 0;
}

size_t find_short(const char *s){
	size_t min=0;
	// skip whitespace
	while(is_whitespace(*s))
		s++;
	// count first word
	while(*s!='\0' && !is_whitespace(*s)){
		min++;
		s++;
	}
	if(*s=='\0')
		return min;
	int counter = 0;
	while(*s!='\0'){
		if(!is_whitespace(*s)){
		counter++;
		}
		else{
			if(min>counter && counter>0){
			min = counter;
			}
			counter = 0;
		}
		s++;
	}
	if(counter<min && counter>0){
		min = counter;
	}
	
	return min;
}

int main(void){
	printf("Enter string to find size of smallest word:\n");
	char s[1000];
	fgets(s, 1000, stdin);
	printf("size of smallest word = %d\n", find_short(s));
	return 0;
}
