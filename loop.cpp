#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	int a, i, j;
	double ave , sum = 0;
	printf("Enter how many value you want to add: ");
	scanf("%d", &j );
	
	printf("Enter your desired Values : ");
	
	//looping
	for(i = 0; i<j; i++){
		scanf("%d", &a);
		sum = sum +a; 
	}	
	printf("The sum is %d\n", sum);
	
	ave = sum / j;
	printf("The average value is: %lf\n", ave);
		
	return 0;
}
