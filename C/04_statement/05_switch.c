/*
	switch(){
		case 1:
		code 
			
		case 2:
		
		default:
		
	}
*/

#include<stdio.h>
#include<conio.h>

void main(){
	
	int choice;
	printf("Enter your your number : ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\nMonday");
			break;
			
		case 2:
			printf("\nTuesday");
			break;
		case 3:
			printf("\nWensday");
			break;
			
		case 4:
			printf("\nthursday");
			break;
			
		case 5:
			printf("\nFriday");
			break;
		
		default :
			printf("\nInvalid Days...");
	}	
	
	getch();
}
