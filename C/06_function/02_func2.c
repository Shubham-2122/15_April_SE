 /*
 	1) function without argumeent and no return
 
 	syntax : 
 	datatype fun-name(){
		...logic 
	}
	fun-name();
 */
 
#include<stdio.h>
#include<conio.h>

void demo(){
	printf("\nHello demo function\n");
}

void star()
{
	int i;
	for(i=1;i<=30;i++){
		printf("*");
	}
}
void main()
{
	star();
	demo();
	star();
	demo();
	
	star();
	printf("\nHello shubham jadav\n");
	star();
	
	getch();
}
