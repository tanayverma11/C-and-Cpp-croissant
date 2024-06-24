#include<conio.h>
#include<stdio.h>
#include<string.h>
void fill();
void Vowel(char[]);
//void Consonant(char[]);
char s[99];
int i=0,j;
void main() {
	fill();
	Vowel(s);
//	Consonant(s);
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
void Vowel(char c[]) {
	printf("\nWords starting with vowels are:\t");
	for(i=0; i<strlen(s); i++) 
	{
		if(s[i]==' ' && s[i]!='\0')
			if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')
				
				printf("%c",s[i+1]);			
	}
}
//void Consonant(char c[]) {
//	printf("\nConsonants in the sentence:\t");
//	for(i=0; i<strlen(s); i++) 
//		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
//		;
//		else
//			printf("%c",s[i]);
//}

