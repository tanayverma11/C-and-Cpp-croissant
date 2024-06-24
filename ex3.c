#include <stdio.h>
int main()
{
    FILE *fp;
    char c;

    fp = fopen("example.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
     if (!feof(fp))
    {
        printf("EOF\n");
        return 1;
    }
    int i = ftell(fp);
    char ch = fgetc(fp);
    while(!feof(fp)){
        printf("%d ",i);
        printf("%c\n",ch);
        i = ftell(fp);
        ch = fgetc(fp);
    }
    printf("%d ",i);
    printf("%c\n",ch);
    
    
}
