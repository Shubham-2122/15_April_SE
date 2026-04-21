/*
	if(codition){
		..code
	}
	else if(codition){
		..code
	}

	else if(codition){
		..code
	}	else{
		..code
	}
*/
#include<stdio.h>
#include<conio.h>


void main()
{
	int marks;
	
	printf("Enter your marks :");
	scanf("%d",&marks);
	printf("Marks : %d",marks);
	
	if(marks > 100 || marks < 0){
		printf("\nMarks are invalid..");
	}
	else if(marks >= 85 && marks<=100){
		printf("\nA grade Student");
	}
	else if(marks >= 70 && marks<85){
		printf("\nB grade Student");
	}
//	55-70
	else if(marks <70 && marks >=55){
		printf("\nC grade Student");
	}
	else if(marks<=54 && marks >=33){
		printf("\nD grade student");
	}
	else {
		printf("\nFaild Student");
	}
	
	getch();
}




