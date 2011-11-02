#include<iostream>
using namespace std;



int main(){
string s1,s2; int a=0;
cout<<"Enter first string: ";cin>>s1;
cout<<"Next: ";cin>>s2;
if (s1.length()!=s2.length()){
cout<<"Strings are of different length";
}
else{
for (int i=0; i<s1.length();i++){
a+= (int)s1[i]-(int)s2[i];
}
if ((a==0)||(a%32==0))
{cout<<"anagram";}
else{
cout<<"not anagram";
}	
}
}
