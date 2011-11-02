//Insertion Sort
// Best Case - n ; Avg case - n;Worse case - n^2

#include<iostream>
using namespace std;

int main()
{
    // Program for Insertion sort
    int i,j,key;
    int a[10];
    system("cls"); //clear screen
    for(i=0;i<9;i++)
    {              
         cout<<"Enter number"<<i+1<<": ";
         cin>>a[i];           
                    }
         cout<<"You entered this array \n";           
    for(i=0;i<=9;i++)
    {                       
         cout<<a[i]<<" ";           
                    }           
     // Code for insertion sort
     
     for(j=1;j<=9;j++){
          key=a[j];
          i=j-1;
          
          while(i>=0 && a[i]>key)
          {
               a[i+1]=a[i];
               i--;      
                     }
            a[i+1]=key;                                          
                      }
        
    cout<<"\nSorted array is \n";           
    for(i=0;i<=9;i++)
    {                       
         cout<<a[i]<<" ";           
                    }           
                      
                         
    return 0;
}
