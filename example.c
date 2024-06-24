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
    c = fgetc(fp);
    printf("%d", c);
     while ((c = fgetc(fp)) != EOF)
     {
         printf("%c", c);
        if (feof(fp))
        {
            printf("\nEnd of file reached\n");
         }
    }

    if (feof(fp))
    {
        printf("\nEnd of file reached\n");
    }

    fclose(fp);

}
