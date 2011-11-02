//string reverse using two arrays

#include<iostream>

using namespace std;

void strrev(char *x,char *y)
 {
  int n,i,j=0;
  if(x==NULL)
            { cout<<"Null string Entered"<<endl;
             return ;}
  for(n=0;x[n];n++);
  
  
  for(i=n-1;i>=0;i--)
  {
         y[j]=x[i];
         j++;
         
                   }    
                   y[j]='\0';                  
  cout<<"Reversed String is "<<y<<endl;
  }

int main()
{
    int size,result;
    char *a;
    char *b;
    cout<<"Enter the size of string you want to reverse"<<endl;
    cin>>size;
    a=new char[size];
    b=new char[size];
    cout<<"Enter the string of size: "<<size<<endl;
    cin>>a;
    
    strrev(a,b);
    
    exit(0);
}
