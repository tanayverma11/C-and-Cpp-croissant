#include<conio.h>
#include<stdio.h>
#include<string.h>
char s[99];
int i=0;
void main() {
	printf("Enter your full name: \n");
	fgets(s,99,stdin);
//	puts(s)
	printf("\nYour Name:\t");
	for(i; i<=strlen(s); i++) {
		s[i]=toupper(s[i]);
		printf("%c",s[i]);
	}
	printf("\nYour Initials are:\t");
	printf("%c.",s[0]);
	for(i=1; i<=strlen(s); i++)
		if(s[i]==' ')
			printf("%c.",s[i+1]);			
getch();
}
