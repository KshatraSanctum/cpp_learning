#include <iostream>
using namespace std;

int main()
{
 int i,n,p;
 int s=0;
 int a=1;
 cout<<"Enter the value of n:";
 cin>>n;
 cout<<"1"<<endl;
 for(i=1;i<n;i++)
 {
   p=s+a;
   cout<<p<<endl;
   s=a;
   a=p;
 }
}