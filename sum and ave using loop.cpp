#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	int a, i, sum = 0;
	
	float ave;
	printf("Enter your desired Value : ");
	//looping
	for(i = 1; i<=5; i++){
		scanf("%d", &a);
		sum = sum +a; 
	}	
	printf("The sum is %d\n", sum);
	
	ave = sum / 5;
	printf("The average value is: %f\n", ave);
		
	return 0;
}
