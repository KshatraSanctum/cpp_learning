#include <iostream>
using namespace std;

int main()
{
 int i,j,n;
 cout<<"Enter the value of n:";
 cin>>n;
 for(i=n;i>=1;i--)
 {
    char a=64+i;
   for(j=n;j>=i;j--)
   {
     cout<<a<<" ";
     a++;
   }
   cout<<endl;
}
 return 0;
}