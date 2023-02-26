/*
 By Abdalrahman0x80
*/

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
/*Create File*/
void createfile(const char nameFile[255]){
	FILE *file;
	file = fopen(nameFile,"w+");
	
}
void createMultiFile(int num,char NameFile[255],char code[255]){
	for(int i=0; i<=num;i++){
		char Name[255];
		sprintf(Name,"%s%i%s",NameFile,i,code);
		createfile(Name);

	}

}
/*delete file*/
void RemoveFile(char Name[255]){
	remove(Name);
}
/*rename file*/
void RenameFile(char from[255],char to[255]){
    rename(from,to);
   
}
/*add text to file*/
void WriteFile(char *Name,char *txt){
	FILE *name;
	name = fopen(Name,"a+");
	fprintf(name,txt);
	fclose(name);

}
/*override file*/
void OverRideFile(char name[255],char *txt){
	FILE *over;
	over = fopen(name,"w+");
	fprintf(over,"%s",txt);


}
/*read file*/
void Read(char *Name){
	char read[255];
	FILE *read2;
	read2 = fopen(Name,"r+");
	fgets(read,1024,read2);
	printf(read);
}
