/*
A neon number is a number where the sum of digits of the square of the number is equal to the number itself.
*/
#include <iostream>
using namespace std;
int main()
{
   int n,sq,sum = 0;
   cout<<"Enter a number ";
   cin>>n;
   sq = n * n;
   while(sq > 0)
   {
       sum = sum + sq % 10;
       sq = sq / 10;
   }
   if(sum == n)
   {
       cout<<n<<" is a neon number.";
   }
   else
   {
       cout<<n<<" is not a neon number.";
   }
   return 0;
}
