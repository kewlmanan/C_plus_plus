// Recursive Factorial

#include <iostream>
using namespace std;

int factorial ( int n)
{
    int ans;
 if ( n==1)
    {
      return 1;
    }
 ans = n * factorial(n-1);
 return ans;
}

int main ()
{
int n,fact;
cout << " Enter the number : ";
cin >> n;
fact = factorial (n);

cout <<"\n It's factorial : "<< fact ; 
return 0;
}
