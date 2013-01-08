#include <iostream>
using namespace std;

int main()
{
int a[3]={2,3,4};
int k,j,i=0;
int m,count=0;
for (i=0;i<8;i++)
    {
        k=i;
        cout<<"\n";
        for (j=0;j<3;j++)
        {
            m=k;
            m=(m & 1);
            k=(k>>1);
            if ( m == 1)
            {  cout<<a[j]<<" ";
               count=1;
            }
        }
    if (count==0)
    {
        cout<<"NULL Set";
    }
}
return 0;
}
