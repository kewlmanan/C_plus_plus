// Quick Sort
// Best - nlogn
// Avg - nlogn
// Worst - n^2

#include<iostream>

using namespace std;

void quicksort(int x[],int p,int r)
{
    int i,j,pivot,temp=0;
    pivot=x[(p+r)/2];
    i=p;
    j=r;
   
   while(i<=j)
    {
            while(x[j]>pivot)
                  j--;              
            while(x[i]<pivot)
                  i++;
              
              if(i<=j)
                   {temp=x[i];
                   x[i]=x[j];
                   x[j]=temp;
                   i++;
                   j--;}
    }
        if(p<j)
               quicksort(x,p,j);
        if(i<r)
               quicksort(x,i,r);        
}


int main()
{   fflush(stdin);
    int z[]={5,2,3,4};
    
    int p=0;
    int r=3;
  
    quicksort(z,p,r);
    for(p=0;p<4;p++)
    cout<<z[p]<<endl;            
    return 0;
}
