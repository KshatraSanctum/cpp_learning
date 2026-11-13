#include <iostream>
using namespace std;

int main()
{
  int i,j,n;
  cout<<"Enter the value of n:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    char a=64+i;
    for(j=1;j<=i;j++)
    {
      cout<<a<<" ";
      a++;
    }
    cout<<endl;
  }
  return 0;
}