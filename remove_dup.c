#include<conio.h>
#include<stdio.h>
#include<string.h>
void fill();
void removeDup(char[]);
char s[99];
int i=0;
char c;
int count=1;
void main() {
	fill();
	removeDup(s);
getch();
}
void fill() {
	printf("Enter a sentence: \n");
	fgets(s,99,stdin);
	printf("\nSentence in lower case:\t");
	for(i; i<=strlen(s); i++) 
	{
		s[i]=tolower(s[i]);
		printf("%c",s[i]);
	}
}
void removeDup(char c[]) {
	
	printf("\nSentence after removing duplicate characters:\t");
	for(i=0; i<strlen(s); i++) 
	{
		c=s[i];
		if(c==s[i+1])
		{
				count++;
				if(count>1)
				printf("%c",s[i]);			
		}
	}
}

