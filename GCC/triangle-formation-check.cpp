#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3;
	cout<<"Enter the sides of a triangle\n";
	cin>>s1;
	cin>>s2;
	cin>>s3;
    if(s1>s2&&s1>s3)
    {
		if(s1<(s2+s3))
	   cout<<"They can form the sides of a triangle.";
	  else
	      cout<<"not form triangle";  
	}        
    else if(s2>s1&&s2>s3)
    {
	   if(s2<(s1+s3))
       cout<<"They can form the sides of a triangle."; 
       else
        cout<<"not form triangle"; 
    }      
    else if(s3>s1&&s3>s2)
    {
	  if(s3<(s1+s2))
      cout<<"They can form the sides of a triangle." ; 
    else
        cout<<"not form triangle";
    }                    
}
