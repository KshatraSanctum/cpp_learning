#include <iostream>
using namespace std;

int main()
{
  int i,n;
  int j=0;
  cout<<"Enter the value to be checked for prime:";
  cin>>n;
  for(i=2;i<n;i++)
  {
    if(n%i==0)
  {
    j++;
  }
  }
  if(j==0)
  cout<<"Prime";
  else
  cout<<"Not Prime";
}