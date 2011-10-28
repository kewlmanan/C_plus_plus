// Stacks - Linked List implementation
#include<iostream>

using namespace std;

struct node
{
       int data;
       node *link;
};

class lstack
{
      private:
      node *top;
      public:
             lstack();
             ~lstack();
             void push(int);
             void pop();
             void display();
};

lstack::lstack()
{
  top=NULL;
}


lstack::~lstack()
{
 if(top==NULL)
 {return;}
 
 node *tmp;
 
 while(top)
 {        tmp=top;     
          top=top->link;
          delete tmp;       
 }  
}

void lstack::push(int x)
{
      node *tmp=new node;
      
      if(tmp==NULL)
      {
        cout<<"Stack is FULL"<<endl;
        return;
        }
      
      tmp->data=x;
      tmp->link=top;
      top=tmp;
      cout<<endl<<x<<":Pushed"<<endl<<endl;
      cout<<"Current Stack"<<endl;
      display();

}

void lstack::pop()
{
    if(top==NULL)
    {
      cout<<"The stack is empty"<<endl;
      return;
    }
    
    node *tmp;
    tmp=top;
    int n=tmp->data;
    top=top->link;
    delete tmp;
    cout<<endl<<n<<":Popped"<<endl<<endl;
    cout<<"Current Stack"<<endl;
    display();
    return;
}

void lstack::display()
{
     
     node *tmp;
     tmp=top;
     
     while(tmp)
     {
               cout<<"      "<<tmp->data<<endl;
               tmp=tmp->link;
     }
}

int main()
{
    lstack s;
    
    s.push(3);
    s.push(2);
    s.push(4);
    //s.display();
    
    s.pop();
    s.pop();
    s.pop();
   // s.pop();
    
    s.push(100);
   // s.display();
return 0;
}
