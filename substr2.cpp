//substr with count

#include<iostream>

using namespace std;

int substr(char x[],char y[])
{
    int xl,yl,i,j,cntr=0;
    
    if(x==NULL || y==NULL) // null input
               return -1;
    for(xl=0;x[xl];xl++);
    for(yl=0;y[yl];yl++);
    
    if(yl>xl)            // bad string length
             return -1;    
            
    for(i=0;i<=xl-yl;i++)
    {
                         for(j=0;j<=yl;j++)
                         {
                                           if(x[i+j]!=y[j])
                                               break;
                                           }
                                           if(j==yl)
                                           {
                                                    cntr++;
                                                    }
                                                    //incr i
                         }     
    return cntr;   
}

int main()
{  
    char b[]="jack in the in box";
    char a[]="jack";
    int result;
    system("cls");
    result=substr(a,b);
    if(result=-1)
    {cout<<"Bad input";}
    else if(result=0)
    {cout<<"Substring is not present";}
    else
    cout<<"Substring is present and the no of occurences are \n"<<result;
   
    exit(0);
}
