// Queue - Linked list implementation

#include<iostream>

using namespace std;

struct node
{
       int data;
       node *link;
};

class lqueue
{
      private:
              node *front;
              node *rear;
      public:
             lqueue();
             ~lqueue();
             void add(int);
             int remove();
             void display();
};

lqueue::lqueue()
{
              front=NULL;
              rear=NULL;
}

lqueue::~lqueue()
{
               if(front==NULL)
               {
                            return;
                              }
                node *tmp;
               while(front != NULL)
               {
                          
                           tmp=front;
                           front=front->link;
                           delete tmp;
                           
                           }
               
}

void lqueue::add(int x)
{   
     node *tmp;
     tmp=new node;
      if(tmp==NULL)
     {
                  cout<<"Queue is Full"<<endl;
                  return;
     }
     if(front==NULL)
     { 
        tmp->data=x;
        tmp->link=NULL;
        front=rear=tmp;
        display();
        return;        
                   }
   
     
     tmp->data=x;
     tmp->link=NULL;
     rear->link=tmp;
     rear=tmp;
     display();
}

int lqueue::remove()
{
     if(front==NULL)
     {
      cout<<"Queue is Empty"<<endl;
      return NULL;
     }
     node *tmp;
     tmp=front;
     int n=tmp->data;
     front=front->link;
     delete tmp;
     display();
     return n;
}

void lqueue::display()
{
     node *tmp;
     tmp=front;
     
     int count=0;
     cout<<"Current Queue"<<endl;
     while(tmp)
     {         count++;
               cout<<" "<<tmp->data;
               tmp=tmp->link; 
     }
     cout<<endl<<"No of elements in queue :"<<count<<endl;
}


int main()
{
lqueue q;

q.add(1);
q.add(3);
cout<<"Element Removed : "<<q.remove()<<endl;
cout<<"Element Removed : "<<q.remove()<<endl;

return 0;
}
