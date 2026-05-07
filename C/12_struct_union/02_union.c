#include<stdio.h>
#include<conio.h>

union Student{
	char name[50];
	int roll;
	float marks;
};

void main()
{
	union Student s1;
	printf("Enter your Roll no :");
	scanf("%d",&s1.roll);
	
	printf("Enter your Name :");
	scanf("%s",&s1.name);
	
		printf("Enter your Marks :");
	scanf("%f",&s1.marks);
	
	printf("\n-----student List-----");
	printf("\nRoll no : %d",s1.roll);
	printf("\nName : %s",s1.name);
	printf("\nMarks : %.1f",s1.marks);	

		
	getch();
}