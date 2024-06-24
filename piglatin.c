#include<conio.h>
#include<stdio.h>
#include<string.h>
char s[20],s1[20],ay[]={"AY"},PL[22];
int i=0,j=0,p;
void main() {
	printf("Enter a word: \n");
	fgets(s,20,stdin);
	printf("\nOriginal Word:\t");
	for(i; i<=strlen(s); i++) {
		s1[i]=toupper(s[i]);
		printf("%c",s1[i]);
	}
	printf("\nPiglatin Word:\t");
	for(i=strlen(s1); i>-1; i--) 
			if(s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
				p=i;					
if(p>0)
{
	for(i=p-1,j=0; i<strlen(s1),j<strlen(s1)-p; i++,j++)
		PL[j]=s1[i];
	//	printf("%c",s1[i]);
	for(i=0,j=strlen(s1)-p; i<p; i++,j++)
		PL[j]=s1[i];
	//	printf("%c",s1[i]);
	strcat(PL,ay);	
		for(i; i<=strlen(PL); i++) 
			printf("%c",PL[i]);
}
else {	
		for(i=0; i<=strlen(s1)+2; i++)
		{
				PL[i]=s1[i];
				if(i==strlen(s1)+1)
					PL[i]=ay[0];
				if(i==strlen(s1)+2)
					PL[i]=ay[1];
				}
		for(i=0;i<=strlen(PL)+2;i++)
			printf("%c",PL[i]);
	}
getch();
}
