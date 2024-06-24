#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	char substr[10][10];
	int i=0,j=0,ctr=0;
	int c=0;
	printf("Enter a sentence: ");
	fgets(str,sizeof str,stdin);
	
	for(i=0; i<=(strlen(str)); i++) {
		if(str[i]==' ' || str[i]=='\0') 
		{
			substr[ctr][j]='\0';
			ctr++;
			j=0;
		}
		else
		{
			substr[ctr][j]=str[i];
			j++;
		}
	}
	printf("\nWords in the sentence are: \n");
	for(i=0; i<ctr; i++) 
	{
		for(j=0; j<=(strlen(substr[i])); j++)
		{
				if(substr[i][0]=='a')
			{		
					c++;
				
			}
		}
		
	
			if(c>0)
				printf(" \n%s",substr[i]);
	}
	return 0;
}
