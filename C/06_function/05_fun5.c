/*
 function without argument and with return

*/


#include<stdio.h>
#include<conio.h>

int data(){
	return 42;
}

void main()
{
	printf("data : %d",data());
	printf("\ndata : %d",data());
	getch();
}
