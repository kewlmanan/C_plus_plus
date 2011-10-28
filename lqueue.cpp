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
             void remove();
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
                  cout<<"\nQueue is Full"<<endl;
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

void lqueue::remove()
{
     if(front==NULL)
     {
      cout<<"\nQueue is Empty"<<endl;
      return;
     }
     node *tmp;
     tmp=front;
     int n=tmp->data;
     front=front->link;
     delete tmp;
     cout<<n<<" has been deleted from queue";
     display();
     return;
}

void lqueue::display()
{
     node *tmp;
     tmp=front;
     
     int count=0;
     cout<<"\nCurrent Queue"<<endl;
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
q.remove();
q.remove();

return 0;
}
