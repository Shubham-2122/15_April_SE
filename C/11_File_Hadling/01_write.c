/*
	file hadling : File 
	File Entery log
	Tops Job : Entery Puch ,Exit puch : daily routine
	
	Opration :
	1) W  : write
	2) R  : Read
	3) A  : Append
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	
	FILE *file;
	
//	write : file test created and write 
	file = fopen("test.txt","w");
	
//   File path ka data na hot to

	if(file == NULL){
		printf("Error not Found File...");
		return 1;
	}
	
	fprintf(file,"Hello this Test file here");
	fclose(file);
	
	printf("Data Successfully Print in File");
	
	
	return 0;
}