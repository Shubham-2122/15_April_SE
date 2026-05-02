 #include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[50],str1[50];
	char str2[50];
	
	char demo[50],demo2[50];
	
	int l,x;
	
	printf("Enter your Name :");
	gets(str);
	
	printf("Name : %s",str);
	
	l = strlen(str);
	printf("\nString Total length : %d",l);
	
	strcpy(str1,str);
	
	printf("\nString 2 Name : %s",str1);
	
	printf("\nEnter your Name 3 :");
	gets(str2);
	
	printf("String 3 name : %s",str2);
	
	strcat(str,str2);
	
	printf("\nString marge : %s",str);	
	
	strupr(str);
	printf("\nString Upper Case : %s",str);
	
	strlwr(str);
	printf("\nString Lower Case : %s",str);
	
	printf("\nEnter your demo 1 :");
	gets(demo);
	
	printf("String Demo 1: %s",demo);
	
	printf("\nEnter your demo 2 :");
	gets(demo2);
	printf("String Demo 2: %s",demo2);
	
	x = strcmp(demo,demo2);
	
	if(x == 0){
		printf("\nString are match");
	}
	else{
		printf("\nString are not match");
	}
	
	strrev(str);
	
	printf("\nString revser : %s",str);
	
	
	getch();
}
