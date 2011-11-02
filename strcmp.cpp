#include<iostream>

using namespace std;

int strcmp(char *x,char *y)
{    
     int i,j=0;
     for(i=0;x[i];i++,j++)
     {
        if(x[i]==y[j])
       { continue;}
        
        return 0;             
     }
     return 1;
 }

int main()
{   
    int result=0;
    char *a="Hello";
    char *b="hello";
    system("cls");
    
    if(a[0]=='\0' || b[0]=='\0')        // Check if No strings are entered
    cout<<"Bad Input"<<endl;
    
   if(sizeof(a) != sizeof(b))           // Check if string lengths are not equal
   {cout<<"Strings are not equal"<<endl;
   getch();
   exit(0);}
   else
   {  
    result=strcmp(a,b);
    } 
   
    if(result == 1)
    cout<<"Strings are equal"<<endl;
    else
    cout<<"Strings are not equal"<<endl;
    exit(0);
}
   

