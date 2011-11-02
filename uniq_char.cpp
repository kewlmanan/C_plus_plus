//Check if a string is unique or not
//O(n) . Extra space

#include<iostream>
#include<string.h>

using namespace std;

bool unique_check(char str[])
{
     bool char_set[256];
    
     for(int i=0;i<strlen(str);i++)
     {
         
         if(char_set[str[i]]==true)
         return false;
         else
         char_set[str[i]]=true;
     }
}

int main()
{
   
    char a[]="man shah";
    bool unique=unique_check(a);
    if(unique)
    cout<<"String has unique characters"<<endl;
    else
    cout<<"String does not have unique characters"<<endl;
    return 0;
}
