/*
	datatype vari-name = value 
	
	American Standard Code for Information Interchange ASCII 
	shubham
	Shubham
*/

#include<stdio.h>
#include<conio.h>

void main()
{
//	integer + and - value
	int a = 10;
	printf("A : %d",a);
	printf("\nA : %i",a);
	printf("\nthe int size : %d",sizeof(a)); //4
	
// 2 ) float decimal 
	float b = 34.76;
	printf("\nB : %f",b);
	printf("\nB : %.2f",b);
	printf("\nB : %.1f",b);
	printf("\nB : %.f",b);
	printf("\nthe int size : %d",sizeof(b)); //4
	printf("\nthe int size : %d",sizeof(double)); //8
// char alphbalte

	char Name = 's';
	printf("\nName : %c",Name);
	printf("\nthe int size : %d",sizeof(Name)); //1
		
	getch();
}
