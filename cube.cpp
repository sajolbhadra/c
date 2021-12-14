#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	int i, cube, a;
	printf("Enter your number of turn: \n");
	scanf("%d", &a);
	
	for(i=1; i<=a; i++){
		cube = pow(i, 3);
		printf("Number is: %d and cube of the %d is %d\n", i, i, cube);
	}
	
	return 0;
}
