#include <iostream>
using namespace std;

int main()
{
  int i,j,a,n;
  cout<<"Enter the value of n:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      char c = 64+i;
      cout<<c<<"";
    }
    cout<<endl;
  }
  return 0;
}