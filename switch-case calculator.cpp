#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	//Declare Variable
	int a , b, result, remainder ;
	int choice;
	char option;
	printf("Enter 1 for addition\n");
	printf("Enter 2 for addition\n");
	printf("Enter 3 for addition\n");
	printf("Enter 4 for addition\n");
//	Printf("Please Enter your choice: ");
	scanf("%c", &choice );
	
	//get value
	printf("Enter a value of a: ");
	scanf("%d", &a);
	printf("Enter a value of b: ");
	scanf("%d", &b);

	switch(choice)
	{
		case 1: 
			result = a+b;
			break;
		case 2:
			result = a-b;
			break;
		case 3:
			result = a*b;
			break;
		case 4:
			if(a %b!)
			result = a/b;
			break;
		default:
			printf("Invalid Numbers");
			
	
	}
	
	printf("result is : %d\n", result);
	
	return 0;
	getch();
}
