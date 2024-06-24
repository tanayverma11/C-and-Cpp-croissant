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
    c = feof(fp);
    
    printf("%d",c);
    fclose(fp);

}
