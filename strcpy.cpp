//string copy

#include<iostream>

using namespace std;

char* strcpy1(char x[])

{
     int i=0,j,xl;
     
     if(x==NULL || x=="")
              {  cout<<"Bad input";
                return NULL;}
     for(xl=0;x[xl];xl++);
     char *y=new char[xl];
     
      while(x[i])                       
           { y[i]=x[i];
             i++;
             }           
     
     y[i]='\0';
     return y;
}
int main()
{
    int size,result;
    char a[]="alpha";
    char *b=strcpy1(a);
    cout<<b;
    return 0;
}
