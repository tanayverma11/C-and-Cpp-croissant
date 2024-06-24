#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i=0,l=0,v=0,pos=0,a[3]={0,0,0};
void main()
{
	printf("Enter size of array:\n");
	scanf("%d",&l);
	for(i=0; i<l; i++)
		a[i]=rand()%10;
//	for(i=0; i<l; i++) 
//		scanf("%d",&a[i]);
	for(i=0; i<l; i++)
		printf("  %d",a[i]);

	printf("\nEnter value to be inserted:");
	scanf("%d",&v);
	printf("\nEnter index(position) where %d be inserted:",v);
	scanf("%d",&pos);
	
	for(i=l; i>=pos; i--)
		a[i+1]=a[i];
	a[pos]=v;
	printf("\n");
	for(i=0; i<l+1; i++)
		printf("  %d",a[i]);
getch();
}
