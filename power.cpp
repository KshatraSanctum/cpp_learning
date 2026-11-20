//Computes integer powers (a^b) via a standalone function using iterative multiplication, isolating exponentiation logic from main() while reading directly from stdin within a 32-bit int range.



#include <iostream>
using namespace std;

int power()
{
  int a,b;
  cin >> a >> b;
  int ans=1;
  for(int i=1;i<=b;i++)
  {
    ans=ans*a;
  }
  return ans;
}

int main()
{
 int ans=power();
 cout<<"answer is "<<ans<<endl;
}