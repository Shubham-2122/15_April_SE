/*
	3 4 2 1 5
	1 2 3 4 5
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5];
	int i,j;
	int temp;
	
	//user Enter a value
	for(i=0;i<5;i++){
		printf("Enter your Elemets : ");
		scanf("%d",&a[i]);
	}	
	
	printf("---array elements store ---");
	
	for(i=0;i<5;i++){
		printf("\na[%d] : %d",i,a[i]);
	}

//	buble sort
//  3 2 4 1 5
//	2 3 4 1 5
//  2 3 1 4 5
//  1 2 3 4 5 
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\n----asceding order ----");
	
	for(i=0;i<5;i++){
		printf("\na[%d] : %d",i,a[i]);
	}
	
		for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
		printf("\n----desceding order ----");
	
	for(i=0;i<5;i++){
		printf("\na[%d] : %d",i,a[i]);
	}
	
	getch();
}
