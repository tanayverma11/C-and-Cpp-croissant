#include<conio.h>
#include<stdio.h>
int a[2][2]={0,0,0,0};
	int row=2,col=2,i=0,j=0;
void fill();
void disp(int [][col],int,int);
void main() {
	
	printf("\nEnter row & column:");
	scanf("%d%d",&row,&col);
	fill();
	disp(a,row,col);
getch();
}
void fill() {
	

	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("\nEnter element:");
			scanf("%d",&a[i][j]);
		}
	}
getch();
}
void disp(int a[][col], int r, int c){
	printf("\n\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++) {
			printf("%d\t",(a[i][j]));
		}
		printf("\n");
	}
getch();
}
