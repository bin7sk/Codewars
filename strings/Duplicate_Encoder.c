#include<stdio.h>
#include<stdlib.h>
/*
The goal of this exercise is to convert a string to a new string where each character in the new string is "(" 
if that character appears only once in the original string, or ")" if that character appears more than once in the original string.
Ignore capitalization when determining if a character is a duplicate.
*/
char* DuplicateEncoder(char *s){
	int counter = 0;
	while(s[counter] != '\0') counter++;
	char *nl = malloc(counter+1);
	for(int i=0;i!=counter;i++) nl[i] = '-';
	nl[counter] = '\0';
	for(int i = 0; nl[i] != '\0'; i++){
		if(nl[i] != '-') continue;
		char c ='(';
		char src = s[i];
		if(src>='A' && src <='Z') src = 'a' + (src - 'A');
		for(int j=i+1;s[j]!='\0';j++){
			char tmp = s[j];
			if(tmp>='A' && tmp <='Z') tmp = 'a' + (tmp - 'A');
			if(tmp == src){
				c = ')';
				break;
			}
		}
		if(c=='(') nl[i] = '(';
		else{
			for(int j = i+1;s[j]!='\0';j++){
				char tmp = s[j];
				if(tmp>='A' && tmp <='Z') tmp = 'a' + (tmp - 'A');
				if(src == tmp) nl[j]=')'; 
			} 
			nl[i] = ')';
		}
	}
	return nl;
}
int main(){
	printf("Enter line:\n");
	char s[1000];
	scanf("%s", s);
	char *de = DuplicateEncoder(s);
	printf("Duplicate Encoder:\n%s\n", de);
	return 0;
	

}
