#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	//Declare Variable
	int a , b , c, big;
	//get value
	printf("Enter a value of a: ");
	scanf("%d", &a);
	printf("Enter a value of b: ");
	scanf("%d", &b);
	printf("Enter a value of c: ");
	scanf("%d", &c);
	
	//Comparision
	if( a==b || a == c){
		printf(" two number is equal\n");
	}
	if( a>= b && a >=c ){
		printf("The largest value is: %d", a);
//		big = a;
	}
	else if (b>=c){
		printf("The largest value is : %d", b);
//		big = b;
	}
	else{
		printf("The largest value is: %d", c);
//		big = c;
	}
	
//	int large = (a>=b && a>=c) ? (b>=c): c;
//	pritf("The largest value is %d", large);
	
	
	getch();
}
