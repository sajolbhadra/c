#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	int x, sum;
	sum = 0;
	for(x=0; x<=10; x++){
		sum = sum + x;
		printf("%d\n", sum);
	}
	
	return 0;
}
