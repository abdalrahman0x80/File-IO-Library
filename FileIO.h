#include <stdlib.h>
#include <stdio.h>
void createfile(const char name[255],const char name2[255]){
	FILE *f;
	f=fopen(name,"a");
	fprintf(f,"%s",name2);
	fclose(f);
	
}