/*

1
2 2 
3 3 3
4 4 4 4
5 5 5 5 5

1
1 2
1 2 3 
1 2 3 4
1 2 3 4 5

*/
#include<stdio.h>
#include<conio.h>

void main()
{
	
	int r,c;
	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
			printf("%d",r);
		}
		printf("\n");
	}

	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
			printf("%d",c);
		}
		printf("\n");
	}	
	getch();
}
