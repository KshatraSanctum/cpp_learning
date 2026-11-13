#include <iostream>
using namespace std;

int main()
{
  int i,j,n,a;
  cout<<"Enter the value of n:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=n-i;j>=1;j--)
    {
      cout<<" ";
    }
    for(a=1;a<=i;a++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}