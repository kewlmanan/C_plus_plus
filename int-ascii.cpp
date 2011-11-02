//int to ascii

#include<iostream>

using namespace std;

char * intascii(int x)
{
     int n=3,i;
     char ans[4];
     ans[3]='\0';
          for(i=0;i<3;i++)
     {
        ans[(n-1)-i]=(x%10)+'0';
        x=x/10;   
                  }
   
                   
     return ans;
 }

int main ()
{   int x=123;
    cout<<x<<endl;
    char *a;
    a=intascii(x);
    cout<<a;
    return 0;
    }
