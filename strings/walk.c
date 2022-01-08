#include<stdio.h>
#include<stdbool.h>
bool isValidWalk(const char *walk){
	int v=0,h=0;
	int counter=0;
	while(walk[counter]!='\0'){
		switch(walk[counter]){
			case 'n':
				v++;
				break;
			case 's':
				v--;
				break;
			case 'e':
				h++;
				break;
			case 'w':
				h--;
				break;
			case '\n':
				break;
			default:
				return false;
		}
		counter++;
		if(counter>10) return false;
	}
	if(v==0 && h==0 && counter==10) return true;
	return false;
}
int main(void){
	printf("Enter string of directions:\n");
	char str[10];
	fgets(str, 10, stdin);
	printf("%s\n", isValidWalk(str)?"True":"False");
	return 0;
}
