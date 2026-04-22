#include<stdio.h>
#include<conio.h>

void main()
{
	if(4==2){
		printf("inside if");
		if(4>3){
			printf("\n4 is max");
		}
		else{
			printf("\n3 is max");
		}
	}
	else{
		printf("inside else");
	}
	
	getch();
}
