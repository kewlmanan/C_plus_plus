// Binary Search Tree implementation

#include<iostream>
#include "stack.cpp"
#include "queue.cpp"

#define YES 1
#define NO 0
using namespace std;

class bst
{
      private:
              struct node
              {
                     int data;
                     node *left;
                     node *right;
              
              }*root;
      public:
             
                     bst();
                     ~bst();
                     void insert_bst(int);
                     void find_parent(int,int &found,node* &parent);
                     void traverse();
                     void in(node *);
                     void pre(node *);
                     void post(node *);
		     void dfs(node *);
		     void bfs(node *);
             
};

bst::bst()
{
          root=NULL;
}

bst::~bst()
{
}

void bst::insert_bst(int x)
{
     int found;
     found=YES; 
    // cout<<found;
     node *parent;
     
     find_parent(x,found,parent);// find the parent of the node to be inserted   
     node *l;
     
     if(found==YES)
     {
                   cout<<"Node "<<x<<" already exists and hence not inserted"<<endl;
     }
     else
     {   
                l=new node;
                l->data=x;
                l->left=NULL;
                l->right=NULL;
                
                if(root==NULL)
                {root=l;}
                else
     {
                if(parent->data>x)
                parent->left=l;
                
                else
                parent->right=l;
     }
     
     }
            
}

void bst::find_parent(int x,int &found,node* &parent)
{
     found=NO;
     //cout<<found;
     node *q;
     
     if(root==NULL)
     return;
     
     q=root;
    // cout<<q->data;
     while(q!=NULL)
     {
                   if(q->data==x)
                   {
                                 found=YES;
                                 return;
                   }
                   if(q->data>x)
                   {
                                parent=q;
                                q=q->left;
                   }
                   else
                   {
                                parent=q;
                                q=q->right;
                   }
                                 
     }
}

void bst::traverse()
{
     int choice;
     cout<<"Enter choice : \n 1)Inorder 2)Preorder 3)Postorder 4)DFS 5)BFS 6)GoodBye"<<endl;
     cin>>choice;
     
     switch(choice)
     {
                   case 1:
                        in(root);
                        traverse();
                        break;
                   case 2:
                        pre(root);
                        traverse();
                        break;
                   case 3:
                        post(root);
                        traverse();
                        break;
                   case 4:
			dfs(root);
			break;
		   case 5:
			bfs(root);
			break;
		   case 6:
                        cout<<"GoodBye"<<endl;
                        return;
                   
		   default:
                        cout<<"Invalid Choice"<<endl;
                        break;
     }
}

void bst::in(node *q)
{
     if(q!=NULL)
     {
                   in(q->left);
                   cout<<q->data<<endl;
                   in(q->right);
     }
     
}

void bst::pre(node *q)
{
     
     if(q!=NULL)
     {
                   cout<<q->data<<endl;
                   in(q->left);
                   in(q->right);
     }
     
}

void bst::post(node *q)
{

     if(q!=NULL)
     {
                   in(q->left);
                   in(q->right);
                   cout<<q->data<<endl;
                   
     }
    
}

void visit(int x, int &xval,int &yval, node * &vnode)
{
	node *q;
	q=root;
	
	while(q != NULL)
{
	if(q->data==x)
	{

		cout<<"\nVisited "<<x;
		if(q->left != NULL)
		{
			vnode = q->left;
			xval=vnode->data;	
		}
		else
		{	
			xval=-1;
		}
		
		if(q->right != NULL)
		{
			vnode = q->right;
			yval=vnode->data;	
		}
		else
		{	
			yval=-1;
		}
		
		return;
	}
	
	else if ( q->data > x)
	{
		q=q->left;
	}
	else
	{
		q=q->right;
	}

}	
}


void bst::dfs(node *q)
{
	if( q == NULL)
	{
		cout<<"\n Tree Empty";
		return;
	}
	stack s[14];
	
	int x;
	int xval,vyal;
	xval=NO;
	yval=NO;
	x=q->data;
	s.push(x);

	while(!s.isEmpty())
	{
		x=s.pop();
		node *vnode=new node;
		vnode->data=x;
		visit(x,xval,yval,node *vnode);
		
		if(yval != -1)
		{
			s.push(yval);
		}
		if(xval != -1)
		{			
			s.push(xval);
		}

	}
	
}

void bst::bfs(node *q)
{

}

int main()
{
    bst tree;
    int data[]={32,16,34,1,18,87,13,19,41,7,23,53,5,24};
    int i;
    
    //tree.insert_bst(32);
    for(i=0;i<14;i++)
    {
                     tree.insert_bst(data[i]);
    }
    
    tree.traverse();
    return 0;
}
