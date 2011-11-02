#include<iostream>

using namespace std;

char* strremove(char x[],char y)
{
    int i,j=0;
    
    for(i=0;x[i];i++)
    {
                     if(x[i]!= y)
                               x[j++]=x[i];
                     } 
    x[j]='\0';
    return x;
 }

int main()
{
    char a[]="manan";
    char b='a';
    char *c=strremove(a,b);
    cout<<c;
    return 0;
}
