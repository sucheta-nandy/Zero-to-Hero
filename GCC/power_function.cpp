//   Power Function For Large Numbers using Modulo

#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mode 1000000007

ll power_func(ll a, ll n)
{
  if(n == 0)   //Base Condition
    return 1;
  if(n&1)  //When n is odd 
    return (power_func(a,n/2)*power_func(a,n/2)*a)%mode;
  return (power_func(a,n/2)*power_func(a,n/2))%mode;  //When n is even
}

int main() 
{ 
   ll a,n;
   cout<<"Enter base and power "<<endl;
   cin>>a>>n;
   //Calculating a^n for large values of a and n
   cout<<a<<" raise to power "<<n<<" euals "<<power_func(a,n)%mode<<endl;
}



