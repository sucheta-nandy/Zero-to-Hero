#include<bits/stdc++.h>
using namespace std;
 int main()    
{    
int n,r,sum=0,temp,d=0; // n is the number to be checked, r stores the unit's place digit, d is the number of digits, temp stores the number temporarily and sum calculates the result which is to be compared with thw original number       
cin>>n;    
temp=n;    
while(temp>0)
{
 d++;
 temp=temp/10;
}
temp=n;
while(temp>0)    
{    
r=temp%10;    
sum=sum+(pow(r,d)); 
temp=temp/10;    
}    
if(n==sum)    
cout<<"Armstrong  number ";    
else    
cout<<"Not an armstrong number";    
return 0;  
}  
