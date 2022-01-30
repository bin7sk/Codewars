#include<stddef.h>
#include<stdio.h>

size_t get_count(const char* s){
	size_t szt = 0;
	while(*s){
		switch(*s){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				szt++;
				break;
			default:
				break;
		}
		s++;
	}
	return szt;
}
int main(void){
	char s[20];
	scanf("%s", s);
	printf("%ld\n", get_count(s));
	return 0;
}
