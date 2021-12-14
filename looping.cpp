#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	int x, y, z;
		//For looping
	for(x = 0; x <= 10; x++){
		printf("This loop will run %d\n", x);
	}
	
	//While looping
	while( y <= 10){
		printf("%d\n", y);
		y++;
	}
		
	//Do-while looping
		do{
			printf("%d\n", z);
			z++;
		}
		while(z<=10);

	return 0;
}
