#include<stdio.h>
#include<conio.h>
void specialNum(int);
int n=0,sum=0,product=0,add=0;
void main() {
	printf("Enter a two-digit number: ");
	scanf("%d",&n);
	if(n<10 || n>99)
		printf("\nInvalid Input!");
	specialNum(n);
	getch();
}
void specialNum(int n) {
	int f=n/10;
	int l=n%10;
	sum=l+f;
	product=l*f;
	add=product+sum;
	if(n==add)
		printf("\n%d is a Special 2-digit number",n);
	else
		printf("\n%d is Not a Special 2-digit number",n);
	getch();
}

