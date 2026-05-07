#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *file;
	char str[100];
	
//	exits file data add
	file = fopen("test.txt","a");
	
	if(file ==NULL){
		printf("Error not Found File..");
		return 1;
	}
	
//	file data add
	fputs("\ndata append for tech 2",file);
	
	fclose(file);
	
	printf("Data successfuly print in file test");
	
	return 0;
	
}