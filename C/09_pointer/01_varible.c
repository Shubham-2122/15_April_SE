/*
	pointer : trigger karvu 
	varible : & address *
	
	p : varibale 
	*p : Pointer trigger 
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int n; // varibale 
	int *p; //pointer inter trigger 
	
	printf("Enter your Num : ");
	scanf("%d",&n);
	
	p = &n; // address pass
	printf("\nNum : %d",n);
	printf("\nP : %d",p); //address
	printf("\nPointer Num : %u",*p); //value

}