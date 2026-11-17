#include <iostream>
using namespace std;

int main()
{
  int i,j,a,n;
  int p=1;
  cout<<"Enter the value of n:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=n;j>=i;j--)
    {
      cout<<"  ";
    }
    for(a=1;a<=i;a++)
    {
    cout<<p<<" ";
    p++;
    }
    cout<<endl;
  }
  return 0;
}