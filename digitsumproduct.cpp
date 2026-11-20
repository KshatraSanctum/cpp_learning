#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the number:";
    cin>>n;
    int p=1;
    int s=0;
    while(n!=0)
    {
      i=n%10;
      s=s+i;
      p=p*i;
      n=n/10;
    }
    j=p-s;
    cout<<"The difference between the product and sum of digit of a number are as follows:"<<j;
    return 0;
}