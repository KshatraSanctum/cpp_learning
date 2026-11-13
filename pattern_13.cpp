#include <iostream>
using namespace std;

int main()
{
  int i,j,k,n;
  cout<<"Enter the valueo of n:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      char c= 64+j;
      cout<<c<<"";
    }
    cout<<endl;
  }
  return 0;
}