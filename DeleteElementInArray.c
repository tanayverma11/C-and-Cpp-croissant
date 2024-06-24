#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i=0,l=0,pos=0,a[3]={0,0,0};
void main()
{
	printf("Enter size of array:\n");
	scanf("%d",&l);
	for(i=0; i<l; i++)
		a[i]=rand()%10;
//	for(i=0; i<l; i++) 
//		scanf("%d",&a[i]);
	printf("\nOriginal Array: ");
	for(i=0; i<l; i++)
		printf("  %d",a[i]);
	printf("\nEnter index(position) to be deleted from: ",pos);
	scanf("%d",&pos);	
	for(i=pos; i<l; i++)
		a[i]=a[i+1];
	printf("\nNew Array: ");
	for(i=0; i<l-1; i++)
		printf("  %d",a[i]);
getch();
}
