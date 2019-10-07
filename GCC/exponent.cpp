#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
	// your code goes here
 
	int x,y;
	cout<<"enter base value: ";
	cin>>x;
	cout<<"enter exponent value: ";
	cin>>y;
	int result = 1;
	for(int i = 0; i < y; ++i)
	{
		result *= x;
	}
 
	cout <<"the result is : "<< result;
}
