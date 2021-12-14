#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//Declare Variable
	int x, y, sum;
	
	//Print Message and get input
	printf("Enter a value of x: ");
	scanf("%d", &x);
	
	printf("Enter a value of y: ");
	scanf("%d", &y);
	
	//Addition 
	sum = x + y;
	
	//output the value
	printf(" The Summation of %d and %d is %d", x , y, sum);
	
	getch();
}
