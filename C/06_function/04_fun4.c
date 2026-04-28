/*function with arggument and without return

*/
#include<stdio.h>
#include<conio.h>

void demo(int a,int b){
	int sum ;
	sum = a + b; 
	printf("Sum : %d \n",sum);
}

void main()
{
	demo(30,20);
	demo(40,20);
	getch();
}
