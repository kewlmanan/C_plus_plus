// Reverse the words in a sentence

#include<iostream>
#include<string.h>
using namespace std;


void strreverse(char x[],int start,int end)
{
     int i,j;
     int mid=(start+end)/2;
     char temp;
     for(i=start,j=end;i<mid;i++,j--)
     {
        temp=x[i];
        x[i]=x[j];
        x[j]=temp;
     
                           }
 }
void revwords(char s[])
{
 int len;
 for(len=0;s[len];len++);
 int wordstart=-1;
 int wordend=-1;
 int i,j;
 for(i=0;i<len;i++)
 {
   if(s[i]==' ' && wordstart==-1) // continue till we find the space
   {
             continue;
   }       
   else if (wordstart == -1) // spaces have been scanned and so set the word start
   {
        wordstart=i;
   }        
    
   if(wordstart != -1 && s[i]==' ') // find where the word ends and then pass it to strreverse
   {
        wordend=i-1;
        strreverse(s,wordstart,wordend);
        wordstart=-1;
        wordend=-1;
                
    }
                   }
   if(wordstart!= -1) // Last word as the word end will nt be set as there will be no space  
   {
     strreverse(s,wordstart,(len-1));             
   }

 }


int main()
{
    char string[]="tam Tac .";
    char m[]="cat mat";
 
    revwords(string);
    cout<<string;
    return 0;
}
