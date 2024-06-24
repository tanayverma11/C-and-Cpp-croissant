#include<conio.h>
#include<stdio.h>
#include<string.h>
char s[99];
int i=0,p;
void main() {
	printf("Enter your full name: \n");
	fgets(s,99,stdin);
//	puts(s)
	printf("\nYour Name:\t");
	for(i; i<=strlen(s); i++) {
		s[i]=toupper(s[i]);
		printf("%c",s[i]);
	}
	for(i=0; i<strlen(s); i++) 
		if(s[i]==' ')
			p=i;	
	printf("\nYour Name in (S.B. Mittal) format is:\t");
	printf("%c.",s[0]);
	for(i=1; i<p; i++)
		if(s[i]==' ')
			printf("%c.",s[i+1]);	
	for(i=p; i<strlen(s); i++)
		printf("%c",s[i]);	
getch();
}
