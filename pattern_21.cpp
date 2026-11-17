#include <iostream>
using namespace std;
int main()
{
  int i,j,n,a;
  cout<<"Enter the value of n:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=i;j<=n;j++)
    {
      cout<<"*"<<" ";
    }
    for(a=1;a<=i;a++)
    {
      cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}