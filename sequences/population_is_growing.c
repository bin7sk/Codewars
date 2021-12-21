#include<stdio.h>
/*
Given parameters:
p0, percent, aug (inhabitants coming or leaving each year), p (population to surpass)
the function nb_year should return n number of entire years needed to get a population greater or equal to p.
*/
int nbYear(int p0, double percent, int aug, int p){
	int n = 0;
	percent /= 100;
	while(p0 < p){
		p0 = p0 + aug + percent * p0;
		n++;
	}
	return n;
}
int main(void){
	int p0, aug, p;
	double percent;
	printf("Enter population at the beginning:\n");
	scanf("%d", &p0);
	printf("Enter percent of population growth:\n");
	scanf("%f", &percent);
	printf("Enter inhabitants that come in every year:\n");
	scanf("%d", &aug);
	printf("Enter population to superpass:\n");
	scanf("%d", &p);
	printf("result: %d", nbYear(p0, percent, aug, p));
	putchar('\n');
	
}
