/*
	if(codition){
		..code;
	}
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Age :%d",age);
	
//	true
	if(age >= 18){
		printf("\nAge is Allow");
	}
	
	getch();
}
