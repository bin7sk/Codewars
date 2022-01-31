#include<stdio.h>
#include<stdlib.h>
const char* number_to_string(int number){
	if(number==0){
		char *str = malloc(2);
		*str = '0';
		*(str+1) = 0;
		return str;
	}
	int len = 0;
	int sign = (number<0) ? -1 : 0;
	if(number<0){
		len++;
		number *= -1;
	}
	for(int temp=number;temp;temp/=10) 
		len++;
	char* str = malloc(len+1);
	str[len] = '\0';
	len--;
	for(int temp=number;temp;temp/=10){
		str[len] = '0' + (temp%10 - 0);
		len--;
	}
	if(sign<0) str[0] = '-';
	return str;
}
int main(void){
	int number;
	scanf("%d", &number);
	char* str = number_to_string(number);
	printf("string:\n%s\n", str);
	return 0;
}
