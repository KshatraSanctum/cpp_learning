#include <iostream>
using namespace std;

int main()
{
 int i,j,a,p,q,r,b,n;
 cout<<"Enter the value of n:";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  a=1;
  for(j=n;j>=i;j--)
  {
   cout<<a<<" ";
   a++;
  }
  for(p=1;p<i;p++)
  {
    cout<<"*"<<" ";
  }
  for(q=1;q<i;q++)
  {
    cout<<"*"<<" ";
  }
   b=a-1;
  for(r=n;r>=i;r--)
  {
    cout<<b<<" ";
    b--;
  }
  cout<<endl;
 }
 return 0;
}