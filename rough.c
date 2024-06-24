#include<stdio.h>
int main(){
	int m=10;
	int k=   (++m + ++m) +  (--m - (++m * m++))            ;
	printf("%d",k);
	
	return 0;
}
