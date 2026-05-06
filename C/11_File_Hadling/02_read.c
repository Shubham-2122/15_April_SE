#include<stdio.h>
#include<conio.h>

int main()
{
//	 Read : r

	FILE *file;
	char str[100];
	
//	read : file exits hot file read thase
	file = fopen("demo.txt","r");
	
	if(file == NULL){
		printf("Error not Found File...");
		return 1;
	}
	
	while(fgets(str,100,file) != NULL){
		printf("%s",str);
	}
	
	fclose(file);
	printf("\n********************************");
	
	
	return 0;
}