#include<conio.h>
#include<stdio.h>
#include<string.h>

char s[5],ch,ss[5],*ptr;
int i=0,c=0;
void main() {
	printf("Enter a sentence: \n");
	fgets(s,5,stdin);
	puts(s);
	printf("Character:\tFrequency:\n");
	for(i; i<=strlen(s); i++) 
		ss[i]=toupper(s[i]);
	
	
	
			for(i=0; i<=strlen(ss); i++)
			{
				for(ch='A'; ch<='Z'; ++ch)
				{
					if(ss[i]==ch) {
					
					c++;
					}
				}
		
				if(c>0)
				printf("%c\t\t\t%d\n",ss[i],c);
	
			}
			
			
getch();
}
