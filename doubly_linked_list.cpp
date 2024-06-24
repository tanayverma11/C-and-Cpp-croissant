#include <iostream>
#include <malloc.h>
using namespace std;
void create();
void display();
void RevDisp();
void Finsert();
void Linsert();
void Minsert();
void Fdel();
void Ldel();
void Mdel();
void breakDLL();
   
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
    
int main()
{
	create();
    display();
    RevDisp();
  	 	Finsert();
  	 	Linsert();
  	 	Minsert();
  	 		Fdel();
 			Ldel();
 	    	Mdel(); 
   				breakDLL();  
    return 0;
}
void create()
{
	while (choice==1)
    {
        new1 = (NODE *)malloc(sizeof(NODE));
        cout << "Enter the data item:";
        cin >> new1->data;
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
        
        fflush(stdin);
        cout << "Do you want to continue?\nYes(Type 1):\nNo(Type 0):\n";
        cin >> choice;
    }
    
}
void display()
{
	temp = first;
    cout << "\nStatus of the linked list is:\n";
    while (temp != 0)
    {
        cout << temp->data << " <=> ";
        count++;
        temp = temp->next;
    }
    cout << "NULL\n";
    cout << "No. of nodes in the list =" << count << "\n";  
}
void RevDisp()
{
	temp = last;
    cout << "\nStatus of the linked list in Reverse is:\n";
    while (temp != 0)
    {
        cout << temp->data << " <=> ";
        count++;
        temp = temp->prev;
    }
    cout << "NULL\n";
    cout << "No. of nodes in the list =" << count << "\n";  
}
void Finsert(){
	new1 = (NODE *)malloc(sizeof(NODE));
    cout << "\nEnter the data item to insert at beginning:";
    cin >> new1->data;
    
    new1->prev=NULL;
  	new1->next=first;
    first->prev=new1;
    first=new1;
    
    display();
}
void Linsert(){
	new1 = (NODE *)malloc(sizeof(NODE));
    cout << "\nEnter the data item to insert at last:";
    cin >> new1->data;
 
     new1->prev=last;
     new1->next=NULL;
 	 last->next=new1;
 	 last=new1;
    
    display();
}
void Minsert(){
	new1 = (NODE *)malloc(sizeof(NODE));
    cout << "\nEnter the position for insert:";
    int x;
	cin >> x;
    cout << "\nEnter the data item to insert:";
    cin >> new1->data;
    new1->next=NULL;
    temp=first;
    while(temp->data != x-1){
    	temp=temp->next;
	}
	new1->next = temp->next;
	new1->prev=temp;
    temp->next=new1;
    
    display();
}
void Fdel(){
	cout << "\nAfter deleting data item from front:";
	int f = first->data;
	cout<<" "<<f;
	first = first->next;
	first->prev=NULL;
	display();
}
void Ldel(){
	cout << "\nAfter deleting last data item:";
	temp=first;
	while(temp->next->next!=NULL) {
		temp=temp->next;
	}
	int l = temp->next->data;
	cout<<" "<<l;
	temp->next=NULL;
	last=temp;
	display();
}
void  Mdel(){
	cout << "\nEnter the position to delete from:";
    int pos,m;
	cin >> pos;
	cout << "\nAfter deleting the data item:";
	
	temp=first;
	for(int i=1; i<pos-1; i++){
		temp=temp->next;
	}
	m = temp->next->data;
	cout<<" "<<m;
	temp->next=temp->next->next;
	temp->next->next->prev=temp;
	
	display();
}
void  breakDLL(){
	cout << "\nEnter the position to break the list from:";
    int pos;
	cin >> pos;
	cout << "\nAfter breaking the list:";
	
	temp=first;
	for(int i=0; i<pos-1; i++){
		temp=temp->next;
	}
	temp->next=NULL;
	display();
}
