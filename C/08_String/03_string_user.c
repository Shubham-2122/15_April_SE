#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char name1[30];
	
	printf("Enter your Name :");
//	scanf("%s",&name1);
	
	gets(name1);
	
	printf("Name : %s",name1);
	
	getch();
}
