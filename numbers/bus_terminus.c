#include<stdio.h>
#include<stddef.h>

int bus_terminus(size_t nb_stops, const short bus_stops[nb_stops][2])
{
	int people = 0;
	for(size_t i = 0; i<nb_stops;i++){
		people += bus_stops[i][0];
		people -= bus_stops[i][1];
	}
	if(people>0) return people;
	return 0;
}
int main(void){
	short arr[5][2] = {
		{4,3},
		{1,1},
		{2,3},
		{2,0},
		{3,1}
	};
	printf("%d\n", bus_terminus(5,arr));
}

