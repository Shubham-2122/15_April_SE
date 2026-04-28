/*
 function  with arggument and with return 
 syntax : 
 	datatype fun-name(){
		...logic 
	}
	fun-name();
 
*/

#include<stdio.h>
#include<conio.h>

int sum(int x,int y){
	int sum;
	sum = x +y;
	return sum;
}

void main()
{
	printf("sum : %d",sum(30,20));
	printf("\nsum : %d",sum(50,40));
	getch();
}
