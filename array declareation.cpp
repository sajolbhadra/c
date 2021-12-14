//C library added
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//Variable and array declare
	int i;
	int value[5];
	
	printf("Enter five value\n");
	//Input loop
	for(i=0; i<=5; i++){
		scanf("%d\n", &value[i]);
	}
	//output loop
	for(i=0; i<=5; i++){
	printf("%d\n", value[i]);
	}
	
	
	return 0;
}
