//converts an integer to roman numerals

#include<iostream>
using namespace std;

char * inttoroman(int x)
{
     char roman[15];
     int i=0;
    
     while(x>=1000)
     {
           roman[i]='M';
           x=x-1000;
           i++;       
                  }
     while(x>=500)
     {
           roman[i]='D';
           x=x-500;
           i++;       
                  }
     while(x>=100)
     {
           roman[i]='C';
           x=x-100;
           i++;       
                  }
     while(x>=50)
     {
           roman[i]='L';
           x=x-50;
           i++;       
                  } 
     while(x>=10)
     {
           roman[i]='X';
           x=x-10;
           i++;       
                  } 
     if(x==9)
     {
        roman[i++]='I';    
        roman[i++]='X';
        x=x-9;    
            }  
     while(x>=5)
     {
           roman[i]='V';
           x=x-5;
           i++;      
                  }  
     if(x==4)
     {
             roman[i++]='I';
             roman[i++]='V'; 
             x=x-4;   
            } 
      while(x>=1)
     {
           roman[i]='I';
           x=x-1;
           i++;      
                  }
                  
       roman[i]='\0';
       return roman ;   
                                                
 }

int main()
{
    int x;
    char *a;
    cout<<"Enter the integer value :";
    cin>>x;
    
    if(x==0)
    cout<<"There is no Roman representation of 0";
    else   
   { a=inttoroman(x);
     cout<<"Roman Representaion is :"<<a;}   
    exit(0);
}
