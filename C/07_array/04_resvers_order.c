#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i;
	
	//user Enter a value
	for(i=0;i<5;i++){
		printf("Enter your Elemets : ");
		scanf("%d",&a[i]);
	}	
	
	printf("---array elements store ---");
	
	for(i=0;i<5;i++){
		printf("\na[%d] : %d",i,a[i]);
	}
	
	printf("\n---array reveser elements store ---");
		
	for(i=4;i>=0;i--){
		printf("\na[%d] : %d",i,a[i]);
	}
		
	getch();
}
