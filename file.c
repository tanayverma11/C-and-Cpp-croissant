#include<stdio.h>
int main(){
	FILE *fp;
	fp = fopen("ex.txt", "a+");
	
	//Write
	fputs("This is an example", fp);
	//close
	fclose(fp);
	return 0;
}
