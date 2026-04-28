// 5 = 5+4+3+2+1+0 = 15

#include<stdio.h>
#include<conio.h>

int total(int n){
	int sum = 0,i;
	for(i=1;i<=n;i++){
		sum = sum + i;
	}
	return sum;
}

void main()
{
	
	int num;
	printf("Enter your Num :");
	scanf("%d",&num);
	
	printf("\nNumber of value :%d",num);
	printf("\nTotal of Sum : %d",total(num));	

	getch();
}
