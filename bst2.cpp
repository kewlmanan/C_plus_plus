// Binary Search Tree implementation

#include<iostream>

#define YES 1
#define NO 0
using namespace std;


class stack 
{
  private:
  int *arr;
  int top;
  int size; 
  public:
         stack();
         ~stack();
         stack(int );
         int isEmpty();
         int isFull();
         void push(int);
         int pop();    
      };
      
stack::stack()
{
               } 
stack::~stack()
{
  delete []arr;    
                } 
stack::stack(int s)
{
  size=s;               
  arr=new int[size];
  top=-1;               
                 }
                 
int stack::isEmpty()
{
     if(top==-1)
     {     //cout<<"Stack Underflow"<<endl;   
           return 1;       
      }       
      else
          return 0;
          }

int stack::isFull()
{
     if(top==size-1)
     {
                 //cout<<"Stack Overflow"<<endl;
           return 1;
   }else
           return 0;             
               }

void stack::push(int x)
{
             if(!isFull())
               {  //cout<<"Pushed "<<x<<endl;
                 
                 arr[++top]= x;
                 
                 }
                              
             
             }
int stack::pop()
{          if(!isEmpty())
                  return(arr[top--]);  
            }
            
            
////////////////////////////////////////////////////////////////////////////////
class queue
{
      int *arr;
      int front,rear;
      int size;
      
      public:
             queue();
             ~queue();
             queue(int);
             int isEmpty();
             int isFull();
             void insert(int);
             int remove();
      
      };
      
      queue::queue()
      {
                    }
                    
      queue::~queue()
      {
         delete []arr;
         }
      queue::queue(int s)
      {
        size=s;
        arr=new int[size];
        front=-1;
        rear=-1;               
                       }
       int queue::isEmpty()
       {
           if(front==rear)
           {   
              //cout<<"Queue is Empty"<<endl;
              return 1;
           }
           else
              return 0;
       }
       
       int queue::isFull()
       {
           if(rear==size-1)
           {   
              //cout<<"Queue is Full"<<endl;
              return 1;
              }
           else
               return 0;
       }
       
       void queue::insert(int x)
       {
            if(!isFull())
           {// cout<<"Element "<<x<<"has been inserted"<<endl;
            arr[++rear]=x;}
        }
        
        int queue::remove()
        {
            if(!isEmpty())
              return (arr[++front]);
        }
////////////////////////////////////////////////////////////////////////////////

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
                     void bfs(node *);
                     void dfs(node *);
                     void visit(int,int &xval,int &yval,node* &vnode);
             
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

void bst::visit(int x,int &xval,int &yval,node* &vnode)
{
      node *q;
     
     if(root==NULL)
     return;
     
     q=root;
    // cout<<q->data;
     while(q!=NULL)
     {
                   if(q->data==x)
                   {
                              //   found=YES;
                                 vnode=q;
                                 
                                 cout<<vnode->data<<endl;
                                 if(vnode->left!=NULL)
                                 { node* x=new node;
                                   x=vnode->left;
                                   xval=x->data;
                                   }
                                   else 
                                   {
                                        xval=-1;
                                    }
                                   
                                   if(vnode->right!=NULL)
                                 { node* y=new node;
                                   y=vnode->right;
                                   yval=y->data;
                                   }
                                    else 
                                   {
                                        yval=-1;
                                    }

                                 return;
                   }
                   if(q->data>x)
                   {
                                vnode=q;
                                q=q->left;
                   }
                   else
                   {
                                vnode=q;
                                q=q->right;
                   }
                                 
     }
     
}

void bst::bfs(node *q)
{
     
     if(q!=NULL)
     {         
                 int xval=-1;
                 int yval=-1;
                queue tmp_q(14);              
                tmp_q.insert(q->data);
                while(!tmp_q.isEmpty())
                {
                         node *vnode =new node;
                         vnode->data=tmp_q.remove(); // dequeue
                         visit(vnode->data,xval,yval,vnode);
                         
                         if(xval!=-1)
                         tmp_q.insert(xval); // enqueue
                         
                         if(yval!=-1)
                         tmp_q.insert(yval); // enqueue
                                  
                }
                
     }          
}

void bst::dfs(node *q)
{
     
     if(q!=NULL)
     {
                
                int xval=-1;
                int yval=-1;
                stack s(14);
                s.push(q->data);
     while(!s.isEmpty())
     {
                        
                         node *vnode =new node;
                         vnode->data=s.pop(); // remove from stack
                         visit(vnode->data,xval,yval,vnode);
                         
                         if(yval!=-1)
                         s.push(yval); // insert into stack
                         
                         if(xval!=-1)
                         s.push(xval); // insert into stack
                         
                         
                                  
                }
     }
}

void bst::traverse()
{
     int choice;
     cout<<"Enter choice : \n 1)Inorder 2)Preorder 3)Postorder 4)BFS 5)DFS 6)Exit"<<endl;
     cout<<"Choice: ";
     cin>>choice;
     
     switch(choice)
     {
                   case 1:
                        cout<<"Inorder Traversal of Tree"<<endl;
                        in(root);
                        traverse();
                        break;
                   case 2:
                        cout<<"Pre Order Traversal of Tree"<<endl;
                        pre(root);
                        traverse();
                        break;
                   case 3:
                        cout<<"Post Order Traversal of Tree"<<endl;
                        post(root);
                        traverse();
                        break;
                   case 4:
                        cout<<"BFS Traversal of Tree"<<endl;
                        bfs(root);
                        traverse();
                        break;
                   case 5:
                        cout<<"DFS Traversal of Tree"<<endl;
                        dfs(root);
                        traverse();
                        break;                        
                   case 6:
                        cout<<endl<<"GoodBye"<<endl;
                        return;
                   default:
                        cout<<"Invalid Choice"<<endl;
                        break;
     }
}

int main()
{
    bst tree;
    int data[]={32,16,34,1,18,87,13,19,41,7,23,53,5,24};
    int i;
    
    
    for(i=0;i<14;i++)
    {
                     tree.insert_bst(data[i]);
    }
    
    tree.traverse();
    return 0;
}
