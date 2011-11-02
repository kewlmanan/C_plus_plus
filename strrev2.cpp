//string reverse in the same array

#include<iostream>

using namespace std;

void strrev1(char x[])

{
     int i,j,xl;
     char temp;     
     for(xl=0;x[xl];xl++);
     for(i=0;i<xl/2;i++)
     {                             
            temp=x[i];
            x[i]=x[xl-i-1];
            x[xl-i-1]=temp;                     
                  }
     cout<<x;
      }
int main()
{
    int size=5,result;
    char *a;
   
    cout<<"Enter the size of string you want to reverse"<<endl;
    cin>>size;
    a=new char[size+1];
    fflush(stdin);
    cout<<"Enter the string of size: "<<size<<endl;
    cin.getline(a,size+1,'\n');
    
    strrev1(a);
    return 0;
}
