// Linked List implementation with lots of functions 
#include <iostream> 

using namespace std; 

class ll
{
	private:
	
	struct node
	{
		int data;
		node *next;
	}*head;
	
	public:
	ll();
	~ll();
	void add_at_front(int);
	void append(int);
	void add_after_n(int,int);
	void remove(int);
	void display();
	int search(int);	
 	int size();	

};

ll::ll()
{
	head=NULL;
}
ll::~ll()
{
	if(head==NULL)
	{
		return;
	}
	else
	{
		node *ptr;
		
		while(ptr)
		{
			ptr=head->next;
			delete head;
			head=ptr;
		}
	}
}

void ll::add_at_front(int x)
{
	if(head==NULL)
	{
		head =new node;
		head->data=x;
		head->next=NULL;
	}
	else
	{
		node *ptr=new node;
		ptr->data=x;
		ptr->next=head;
		head=ptr;
	}
}

void ll::append(int x)
{
	if(head == NULL)
	{
		node *ptr=new node;
		ptr->data=x;
		ptr->next=NULL;
		head=ptr;
	}

	else
	{
		node *ptr;
		ptr=head;
		
		while(ptr->next != NULL)
		{
			ptr=ptr->next;
		}
		
		node *tmp = new node;
		tmp->data=x;
		tmp->next=NULL;
		ptr->next=tmp;
	}
}

int ll::size()
{
	int n=0;
	if(head==NULL)
	{
		cout<<"\nLinkedList does not exist";
		return 0;
	}

	node *ptr;
	ptr=head;
	
	while(ptr)
	{
		n++;
		ptr=ptr->next;
	}
	cout<<"\nSize of LinkedList is : "<<n;
	return n;
}

void ll::add_after_n(int x, int n)
{
	int size_ll=size();
	if( n<0 || n > size_ll)
	{
		cout<<"\nBad input value for n";
		return;
	}
	if(n==0)
	{
		cout<<x<<" will be added at the head";
		add_at_front(x);
	}
	else
	{
		node *prev;
		node *ptr;
		node *tmp;
		prev=head;
		ptr=prev->next;
		n--;
		
		while(n)
		{
			prev=ptr;
			ptr=prev->next;
			n--;
		}
		tmp = new node;
		tmp->data=x;
		prev->next=tmp;
		tmp->next=ptr;	
	}
}

void ll::remove(int x)
{
	if(head==NULL)
	{
		cout<<"\nNothing to remove as LinkedList is Empty";
	}
	else
	{	
		int found=search(x);
		if(!found)
		{
			cout<<"\nCannot remove as element is not found in LinkedList";
		}
		else
		{
			node *ptr;
			
			if(head->data == x)
			{
				ptr=head;
				head=head->next;
				ptr->next=NULL;
				delete ptr;
				cout<<"\n"<<x<<"has been removed\n";
			}
			else
			{
				node *tmp;
				tmp=head;
				ptr=tmp->next;
				
				while(ptr->data != x)
				{
					tmp=ptr;
					ptr=ptr->next;
				}
				
				tmp->next=ptr->next;
				ptr->next=NULL;
				delete ptr;
				cout<<"\n"<<x<<"has been removed\n";
			}	
		}
	}
}

int ll::search( int x)
{
	
	if(head==NULL)
	{
		
		cout<<"\nNothing to search as LinkedList is Empty";
		return 0;
	}
	else
	{
		int count=0;
		node *ptr;
		ptr=head;
		
		while(ptr)
		{	
			count++;
			if(ptr->data == x)
			{
				cout<<"\nValue "<<x<<"is found in LinkedList at position no : "<<count;
				return count;
			}
			else
			{
				ptr=ptr->next;
			}
		}
	
	cout<<"\nValue "<<x<<" is not present in LinkedList";
	return 0;
	}
}


void ll::display()
{
	if(head==NULL)
	{
		cout<<"\nNothing to display as LinkedList is Empty";
	}
	else
	{
		cout<<"\nContents of LinkedList are :";
		node *ptr;
		ptr=head;
		
		while(ptr)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}

	}
}

int main()
{
	ll ll;
	
	ll.display();
	ll.append(3);
	ll.append(4);
	ll.append(5);
	ll.append(6);
	
	ll.display();
	ll.remove(7);
	ll.display();
	ll.add_after_n(4,9);
	ll.display();
	return 0;
}
