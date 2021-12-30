#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/*
Implement the function which takes an array containing the names of people that like an item. 
It must return the display text.
*/
int count_length(const char *str){
	int counter = 0;
	while(*str){
		str++;
		counter++;
	}
	return counter;
}
void write_string(const char *source, char *dest){
	while(*source!='\0'){
		*dest = *source;
		source++;
		dest++;
	}
	*dest = *source;
}
char* likes(size_t n, const char* const names[n]){
	switch(n){
		case 0:
		{
			char message[] = "no one likes this";
			char *ret = malloc(count_length(message)+1);
			write_string(message,ret);
			return ret;
			break;
		}
		case 1:
		{
			char *ret = malloc(count_length("likes this")+1+count_length(names[0])+1);
			sprintf(ret, "%s likes this", names[0]);
			return ret;
			break;
		}
		case 2:
		{
			size_t c = count_length(names[0])+5+count_length(names[1])+1+count_length("like this")+1;
			char *ret = malloc(c);
			sprintf(ret, "%s and %s like this", names[0], names[1]);
			return ret;
			break;
		}
		case 3:
		{
			size_t c = count_length(names[0])+2+count_length(names[1])+5+count_length(names[2])+1+count_length("like this")+1;
			char *ret = malloc(c);
			sprintf(ret, "%s, %s and %s like this", names[0], names[1], names[2]);
			return ret;
			break;
		}
		default:
		{
			size_t c = count_length(names[0])+2+count_length(names[1])+10+count_length("others like this")+1;
			char *res = malloc(c);
			sprintf(res, "%s, %s and %lu others like this", names[0], names[1], n-2);
			return res;
		}
	}
}
int main(void){
	return 0;
}
