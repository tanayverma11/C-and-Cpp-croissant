#include<stdio.h>
#include<conio.h>
void addRear(int);
int delFront();
void disp();
void fill(int);
int q[10],front=-1,rear=-1,n,v,x,i,ch;

int main(){
	printf("Enter size of queue: ");
	scanf("%d",&n);
	fill(n);
	FUN:
	printf("\nEnter operation choice:\n1. PUSH\n2. POP\n3. DISPLAY\n");
	scanf("%d",&ch);
	switch(ch){
		case 1: {
			printf("Enter value to be inserted at queue rear:\n");
			scanf("%d",&v);
			addRear(v);
			disp();
			break;
		}
		case 2: {
			x=delFront();
			printf("Deleted element from front of queue is: %d",x);
			disp();
			break;
		}
		case 3: {
		    disp();
		    break;
		}
		default: {
		    printf("\n\t\tENTER CORRECT OPERATION CHOICE\n");
		    goto FUN;
		}
			
	}
	return 0;
}

//add element at rear of queue
void addRear(int v){
	if(rear==n-1) 		//test overfow
		printf("OVERFLOW");
	if(rear==-1)
		front=rear=0;
	else
		q[++rear]=v;
	
}

//delete an element from front of queue
int delFront(){
	if(front==-1)		//test underflow
		printf("UNDERFLOW");
	int v=q[front];
	if(front==rear)
		front=rear=-1;
	else {
		front++;
		return v;
	}
	disp(rear);
}

//display all queue elements
void disp(){
    printf("\nPresent queue is:\n");
	if(front==-1)
		printf("EMPTY Queue");
	for(i=front; i<=rear; i++)
		printf("%d  ",q[i]);
}

void fill(int n){
	printf("\nEnter queue elements:\n");
	for(i=0; i<n; i++)
		{
			scanf("%d",&q[i]);
			++rear;
		}
		front=0;
}

