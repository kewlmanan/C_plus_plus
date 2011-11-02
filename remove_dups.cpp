//Remove duplicates from a string 
// No additional memory
//O(n^2)

#include<iostream>
#include<string.h>

using namespace std;

void remove_dups(char str[])
{
     int tail=1;
     int j;
     for(int i=0;i<strlen(str);i++)
     {
             for (j=0;j<tail;j++)
            { if(str[j]==str[i])
              break;}
             
             if(j==tail)
             {str[tail]=str[i];
             tail++;}
      }        
     str[tail]=0;
}

int main()
{
 char str[]="duplicate characters";
  for(int i=0;i<strlen(str);i++)
 cout<<str[i]<<" ";
 remove_dups(str);
 cout<<endl<<endl; 
 for(int i=0;i<strlen(str);i++)
 cout<<str[i]<<" ";
 return 0;   
}
