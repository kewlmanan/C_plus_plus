// Binary Search Tree implementation
 
#include <iostream> 

using namespace std; 
#define YES 1
#define NO 0

class tree
{
	private:
	
	struct node
	{
		int data;
		node * left;
		node * right; 
	}*root;	
	public:
	tree();
	~tree();
	void insert(int); // Insert into a binary tree
	void find_parent(int x, int &val_found,node* &parent); 
	void traverse();
	void inorder(node *); // Inorder traversal
	void preorder(node *); // Pre order traversal
	void postorder(node *); // Post order traversal

};

tree::tree()
{
	root=NULL;	
}

tree::~tree()
{
   cout<<"\n Destructor called";
}

void tree:: insert(int x)
{
	int val_found=YES;
	node * parent;
	parent = root;
	if(root==NULL)
	{
		node * tmp=new node;
                tmp->data=x;
                tmp->left=NULL;
                tmp->right=NULL;
		root=tmp;
		return;
	}
	
	find_parent(x,val_found,parent);
	
	if(val_found != YES)
	{
		node * tmp=new node;
		tmp->data=x;
		tmp->left=NULL;
		tmp->right=NULL;
		cout<<"Inserted"<<x<<"into the tree";	
		if(x < parent->data)
		{
			parent->left=tmp;
		}
		else
		{
			parent->right=tmp;
		}
	}

}

void tree::find_parent(int x, int &val_found,node* &parent)
{

	val_found=NO;
	node *ptr;
	ptr=root;
	while(ptr)
	{
		if(ptr->data==x)
		{
			cout<<"\nValue already present in tree";
			val_found=YES;
			return;
		}
		
		if (x < ptr->data)
		{
			parent=ptr;
			ptr=ptr->left;
		}
		else
		{
			parent=ptr;
			ptr=ptr->right;	
		}
	}
}

void tree::traverse()
{
	int choice;
	cout<<"\nEnter your choice for traversing the Tree :\n";
	cout<<"\n 1)Pre-order \n2)In-order \n3)Post-Order \n4)Quit";
	cin>>choice;

	switch(choice)
	{
		case 1: // Pre-order traversal
		cout<<"\nPreorder traversal";
		preorder(root);
//		traverse();
		break;

		case 2: // In-order traversal
		cout<<"\nInorder traversal";
		inorder(root);
//		traverse();
		break;

		case 3: // Post-order traversal
		cout<<"\nPostorder traversal";
		postorder(root);
		traverse();
		break;
		
		case 4:// Exit
		cout<<"\nQuitting Program";
		break;
	
		
		default:
		cout<<"\nBad choice";
		traverse();
	}
}

void tree::inorder(node * ptr)
{
	while(ptr != NULL)
	{
		inorder(ptr->left);
		cout<<ptr->data<<" ";
		inorder(ptr->right);
	}
}

void tree::preorder(node * ptr)
{
	while(ptr)
	{
		cout<<ptr->data<<" ";
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
void tree::postorder(node * ptr)
{
	while(ptr)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		cout<<ptr->data<<" ";
	}
}

int main()
{
	int i;	
	tree t;
	int val[7]={30,3,56,4,10,1,2};
	
	for(i=0;i<7;i++)
	{
		t.insert(val[i]);
	}
	t.traverse();
	return 0;
}
