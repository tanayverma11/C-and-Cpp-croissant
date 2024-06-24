#include <iostream>
using namespace std;

class node
    {
    	public:
        int data;
        node *next;
        
        node(int d){
        	data=d;
        	next=NULL;
		}
    };
void Finsert(node* ,int);
void display(node*);
    


void display(node *head)
{
	int count=0;
    cout << "\nStatus of the linked list is\n";
    while (head != NULL)
    {
        cout << head->data << "=>";
        count++;
        head = head->next;
    }
    cout << "NULL\n";
    cout << "No. of nodes in the list =" << count << "\n";  
}
void Finsert(node* &head, int d){
	if(head==NULL){
		head = new node(d);
		return;
	}
	node *n = new node(d);
	n->next=head;
	head=n;
	return;
     
}
int main()
{
	node *head=NULL;
    Finsert(head,5);
  	 	
  	 	display(head);
  	 //	Linsert();
  	 //	Minsert();
  	 //		Fdel();
 	//		Ldel();
 	  //  	Mdel();
   	//			breakLL();
    return 0;
}
