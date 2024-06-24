#include <iostream>
#include <malloc.h>
using namespace std;

void display();
void addRear(int);
void delFront();
   
struct node
    {
        struct node *prev;
		int data;
        struct node *next;
    };
    typedef struct node NODE;

    NODE *first=0, *temp = 0,*last=0,*new1=0;
    int count = 0;
    int choice = 1;
    
int main() {
	
    int choice, value;
    printf("\nImplementation of Queue using Linked List\n");
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
        	printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            addRear(value);
            break;
        case 2:
			delFront();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}
void display()
{
	count=0;
	temp = first;
    cout << "\nStatus of the Queue is:\n";
    while (temp != 0)
    {
        cout << temp->data << " => ";
        count++;
        temp = temp->next;
    }
    free(temp);
    cout << "NULL\n";
    cout << "No. of elements in the queue =" << count << "\n";  
}

void addRear(int v){
		
		new1 = (NODE *)malloc(sizeof(NODE));
	 	new1->data = v;
  		new1->prev=NULL;
        new1->next=NULL;
        if (first == NULL)
        {
            first=new1;
        }
        else
        {
            new1->prev=last;
            last->next=new1;
        }
        last=new1;
        last->next=NULL;
 	 	last=new1;
}

void delFront(){
	cout << "\nDeleted data item from front:";
	int f = first->data;
	cout<<" "<<f<<"\n";
	first = first->next;
	first->prev=NULL;
}


