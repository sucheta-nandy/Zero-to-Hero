// C++ program to create calculator using 
// switch statement 
#include <iostream> 
using namespace std; 

// Main program 
main() 
{ 
	char op; 
	float num1, num2; 

	// It allows user to enter operator i.e. +, -, *, /,^,%
	cin >> op; 

	// It allow user to enter the operands 
	cin >> num1 >> num2; 

	// Switch statement begins 
	switch (op) { 
		
		// If user enter + 
		case '+': 
			cout << num1 + num2; 
			break; 
		
		// If user enter - 
		case '-': 
			cout << num1 - num2; 
			break; 
		
		// If user enter * 
		case '*': 
			cout << num1 * num2; 
			break; 
		
		// If user enter / 
		case '/': 
			cout << num1 / num2; 
			break; 
		
		// If user enters ^;assuming num2 is an integer
		case '^':
			if((int)num2-num2>0.00001 || (int)num2-num2<-0.00001)//accounting for error in floating point variables
			{
				cout<<"Error!Operation not allowed";//num2 must be integer
				break;
			}
			if(num2>=0)
			{
				int ans=1;
				for(int i=1;i<=num2;i++)
					ans*=num1;
			}
			else
			{
				float ans=1.0;
				for(int i=-1;i>=num2;i--)
					ans/=num1
			}
			cout<<num1;
			break;
		
		//If User inputs %
		case '%':
			if(num2<0)
				num2=-1*num2;
			if(num1<0)
			{
				for(int i=0;num1<0;i++)
					num1+=num2;
			}
			else
			{
				for(int i=0;num1>=num2;i++)
					num1-=num2;
			}
			cout<<num1;
			break;
		
		// If the operator is other than +, -, *, /, ^ or % 
		// error message will display 
		default: 
			cout << "Error! operator is unavailble"; 
			break; 
	} // switch statement ends 

	return 0; 
} 
