#include<stdio.h>
#include <stddef.h>
int check_exam(size_t n, const char answers[n], const char student[n]){
	int score = 0;
	for(size_t i = 0; i < n; i++){
		if(answers[i]==student[i])
			score += 4;
		else if(student[i]!=' ')
			score--;
	}
	if(score<0) return 0;
	return score;

}
int main(void){
	return 0;

}
