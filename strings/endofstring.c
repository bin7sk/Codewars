#include<stdio.h>
#include<stdbool.h>
/*
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).
*/
bool solution(const char *string, const char *ending){
	int l1;
	for(l1=0;string[l1]!='\0';++l1) ;
	int l2;
	for(l2=0;ending[l2]!='\0';++l2) ;
	if(l2>l1) return false;
	int d = l1 - l2;
	for(int i = 0; i<l2;i++){
		if(string[i+d]!=ending[i]) return false;
	}
	return true;
}
int main(void){
	enum {maxlength=200};
	char string[maxlength], ending[maxlength];
	printf("Enter string:\n");
	fgets(string, maxlength, stdin);
	printf("Enter ending:\n");
	fgets(ending, maxlength, stdin);
	printf(solution(string, ending)? "True\n" : "False\n");
	return 0;
		
}
