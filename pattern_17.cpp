#include <iostream>
using namespace std;

int main()
{
  int i,j,n;
  char a=65;
  cout<<"Enter the value of n:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout<<a<<" ";
      a++;
    }
    cout<<endl;
  }
  return 0;
}