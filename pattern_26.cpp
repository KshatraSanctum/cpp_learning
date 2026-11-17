#include <iostream>
using namespace std;

int main()
{
 int i,j,n,a;
 cout<<"Enter the value of n:";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  for(j=n;j>i;j--)
  {
    cout<<"  ";
  }
  for(j=1;j<=i;j++)
  {
    cout<<j<<" ";
  }
  for(a=i-1;a>=1;a--)
  {
    cout<<a<<" ";
  }
  cout<<endl;
 }
 return 0;
}