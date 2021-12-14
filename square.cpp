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
	
	//x2 + 2xy + y2
	sum = pow(x,2) + 2*x*y + pow(y,2);
	
	//output the value
	printf(" The square of %d and %d is %d", x , y, sum);
	
	getch();
}
