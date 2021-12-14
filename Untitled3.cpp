//C library added
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	//Variable and array declare
	int i, j , a[100], b[100], evensum, oddsum;
	int arr[100];
	
	printf("Enter how many number you want to try");
	scanf("%d", &j);
	for(i=0; i<j; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<j; i++){
		if(arr[i]%2 == 0){
			printf("Value is Even\n");
			a = a+1;
			evensum= a;
		}
		else{
			printf("value is Odd\n");
			b = b+1;
			oddsum= b;
		}	
	}
	
	printf("Total Even number is %d\n", evensum);
	printf("Total Odd number is %d\n", oddsum);
	
	
	return 0;
}
