#include <iostream>
using namespace std;

int main()
{
  int n,i,j;
  int a=1;
  cout<<"Enter the value of n:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
       cout<<a<<" ";
       a++;
    }
    cout<<endl;
  }
  return 0;
}