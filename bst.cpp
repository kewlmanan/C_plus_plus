// Binary Search Tree implementation

#include<iostream>

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
     cout<<"Enter choice : \n 1)Inorder 2)Preorder 3)Postorder 4)Exit"<<endl;
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
