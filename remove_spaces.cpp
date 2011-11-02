//Title- Replacing spaces with %20

#include<iostream>
#include<string.h>

using namespace std;

void remove_space(char str[])
{
     int i;
     int spc_cntr=0;
     int len=strlen(str);
   //  cout<<len;
     for(i=0;i<len;i++)
     {
           if(str[i]==' ')
           spc_cntr++;
     }
     
     int newlen=len+spc_cntr*2;
     //cout<<newlen;
     str[newlen]='\0';
    // cout<<strlen(str);
     for(i=len-1;i>=0;i--)
     {
           if(str[i]==' ')
           {
                    str[newlen-1]='0';    
                    str[newlen-2]='2';
                    str[newlen-3]='%';
                    newlen=newlen-3;
           }
           else
          { str[newlen-1]=str[i];
           newlen--;}
     }
}

int main()
{
    char str[]="sp ac es";
    for(int i=0;i<strlen(str);i++)
    cout<<str[i];
    
    cout<<endl<<endl;
    remove_space(str);
    
    for(int i=0;i<strlen(str);i++)
    cout<<str[i];
    
    return 0;
}
