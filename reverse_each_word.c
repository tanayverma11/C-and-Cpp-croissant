#include<stdio.h>
#include<string.h>
int main(){
	char str[100], temp;
	int i,j,len;
	printf("Enter a sentence:\n");
	gets(str);
	len = strlen(str);
	for(i=0; i<len; i++)
	{
		for(j=0; j<(len-i-1); j++)
		{
			if((str[j]>=65 && str[j]<=90) || (str[j]>=97 && str[j]<=122))
			{
				if((str[j+1]>=65 && str[j+1]<=90) || (str[j+1]>=97 && str[j+1]<=122))
				{
					if(str[j]>str[j+1])
					{
						temp=str[j];
						str[j]=str[j+1];
						str[j+1]=temp;
					}
				}
		 	}
		}
	}
	printf("\n%s",str);
	return 0;
}
