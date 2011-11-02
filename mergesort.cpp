//Merge Sort
//Best - Avg - Worst - nlogn

#include<iostream>

using namespace std;

 void merge(int a[],int low,int mid,int high)
 {
      int i=low;
      int k=low;
      int j=mid+1;
      int b[5];
      
      while(i<=mid && j<=high) 
      {
          if(a[i]<=a[j])         
         { b[k]=a[i];
           i++;
          
           }
           
           else
           {b[k]=a[j];
             j++;
               }
               k++;                   
                   }
  while(i<=mid)
  {
    b[k]=a[i];            
    i++;
    k++;          }
  while(j<=high)
  {
    b[k]=a[j];
    j++;
    k++;
  }
 
 for(i=low;i<k;i++)
 {
   a[i]=b[i];               
                  }
}

void mergesort(int a[],int low,int high)
{
     int mid;
if(low<high)
{    mid =(low+high)/2;
     mergesort(a,low,mid);
     mergesort(a,mid+1,high);
     merge(a,low,mid,high);           
}

 }
 


int main()
{
    int arr[]={3,4,1,2,6};
    int low=0,i;
    int high=4;
    
    mergesort(arr,low,high);
    for(i=0;i<5;i++)
    {
       cout<<arr[i];             
                    }
    return 0;
}
