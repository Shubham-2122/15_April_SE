// 5 = 5*4*3*2*1 = 120 
//  feboanic : 0 1 1 2 3 5 8


#include<stdio.h>
#include<conio.h>

int total(int n){
	int fat = 1,i;
	for(i=1;i<=n;i++){
		fat = fat * i;
	}
	return fat;
}

void main()
{
	
	int num;
	printf("Enter your Num :");
	scanf("%d",&num);
	
	printf("\nNumber of value :%d",num);
	printf("\nTotal of Fattoril : %d",total(num));	

	getch();
}
