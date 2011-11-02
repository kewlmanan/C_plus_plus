// ascii to int ;

#include<iostream>
#include<math.h>

using namespace std;

int asciiint(char a[])
{   
    int sum=0;
    int i=0;
    while(a[i])
    {
               sum=(sum*10)+(a[i++]-'0');
    } 
   
     return sum;
 }
int main()

{
  char a[]="00001232";
  int ans,i;
  cout<<a<<endl;
  
  ans=asciiint(a);  
  cout<<ans<<endl;
  return 0;
    
}
