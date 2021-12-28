#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

char *accum(const char *source){
	int len = strlen(source);
	if(len==0)
		return NULL;
	char *str = malloc(len + (len+len*len)/2);
	int e = 0;
	for(int i=0;i<len;i++){
		int count = i;
		str[e] = toupper(source[i]);
		e++;
		while(count){
			str[e] = tolower(source[i]);
			e++;
			count--;
		}
		str[e] = '-';
		e++;

	}
	e--;
	str[e] = '\0';
	return str;
}
int main(void){
	printf("Enter string:\n");
	char s[1000];
	scanf("%s", s);
	printf("%s\n", accum(s));
	return 0;
}
