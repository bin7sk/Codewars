#include<stdio.h>
#include<stddef.h>
/*
Write a function that will return the count of distinct case-insensitive alphabetic characters and numeric digits that occur more than once in the input string. 
The input string can be assumed to contain only alphabets (both uppercase and lowercase) and numeric digits.
*/
size_t duplicate_count(const char *text) {
	size_t n = 0;
	char c;
	for(c = 'a'; c<='z';c++){
		int counter = 0;
		for(int i=0;text[i]!='\0';i++){
			char ct = text[i];
			if (ct>='A' && ct<='Z') ct = 'a' + (ct - 'A');
			if(ct==c) counter++;
			if(counter>1){
				n++;
				break;
			}
		}
	}
	for(c = '0'; c<='9';c++){
		int counter = 0;
		for(int i=0;text[i]!='\0';i++){
			char ct = text[i];
			if(ct==c) counter++;
			if(counter>1){
				n++;
				break;
			}
		}
	}
	return n;
}
int main(void){
	printf("Enter line to count duplicates:\n");
	char s[1000];
	scanf("%s", s);
	printf("Duplicates: %d\n", duplicate_count(s));
	return 0;
}
