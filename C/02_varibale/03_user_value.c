#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int b;
	int sum;
	printf("Enter your A :");
	scanf("%d",&a); //& address of a
	
	printf("Enter your B :");
	scanf("%d",&b);
	
	sum = a+b;
	printf("\nA : %d",a);
	printf("\nB : %d",b);
	printf("\nSum : %d",sum);
	
	getch();
}
