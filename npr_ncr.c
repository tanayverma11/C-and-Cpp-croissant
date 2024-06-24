#include<stdio.h>
#include<conio.h>

int factorial(int n) 
{
    int factorial = 1,i=0;
    for (i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

int nCr(int n, int r) 
{
    return factorial(n) / (factorial(r)*factorial(n - r));
}

int nPr(int n, int r) 
{
    return factorial(n) / factorial(n-r) ;
}

int main() 
{
	clrscr();
    int n,r;
    printf("Enter value of n:\t");
    scanf("%d",&n);
    printf("Enter value of r:\t");
    scanf("%d",&r);
      printf("\nValue of nCr is: %d", nCr(n, r));
      printf("\nValue of nPr is: %d", nPr(n, r));
    return 0;
}
