#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	//Declare Variable
	int a , b;
	//get value
	printf("Enter a value of a: ");
	scanf("%d", &a);
	printf("Enter a value of b: ");
	scanf("%d", &b);
	
	//Comparision
	printf("The relation between %d and %d is: \n", a, b);
	if(a == b)
		printf("%d is equal to %d\n", a, b);
	if(a!=b)
		printf("%d is not equal to %d\n", a, b);
	if(a<b)
		printf("%d is less than %d\n", a, b);
	if(a>b)
		printf("%d is greater than %d\n", a, b);
	getch();
}
