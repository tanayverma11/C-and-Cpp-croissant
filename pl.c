#include<conio.h>
#include<stdio.h>
#include<string.h>
char s[20],temp[1],s1[20];
int i=0,j=0;
void main() {
	printf("Enter a word: \n");
	fgets(s,20,stdin);
	printf("\nOriginal Word:\t");
	puts(s);
	
	temp[0]=s[0];
	s[0]=s[strlen(s)];
	s[strlen(s)]=temp[0];
	//for(i=0; i<strlen; i++)
	{
//		printf("%c",s[i]);
	}
printf("%s",s);
getch();
}
