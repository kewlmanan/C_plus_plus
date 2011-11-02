// Selection Sort
//Best Case - Avg case -Worse Case - n^2

/*The algorithm works as follows:
Find the minimum value in the list
Swap it with the value in the first position
Repeat the steps above for the remainder of the list (starting at the second position and advancing each time)*/
#include<iostream>

using namespace std;

void selectionsort(int a[])

{
  int i,j,temp,min,min_index;
  
  for(i=0;i<4;i++)
  {
    min=a[i];
    
    for(j=i+1;j<5;j++)
    {
       if(a[j]<min)
        { min=a[j];                
          min_index=j;
         }             
     }               
    
    temp=a[i];
    a[i]=a[min_index];
    a[min_index]=temp;
                   }     
 }

int main()
{
    int arr[5]={7,4,4,3,2};
    
    selectionsort(arr);
    
    for(int i=0;i<5;i++)
     cout<<arr[i];
    
    return 0;
}
