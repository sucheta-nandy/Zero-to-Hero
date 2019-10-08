#include<iostream>
using namespace std ;
int main() {
    unsigned long int number;
    cout << "Enter the number to evaluate: "<<endl;
    cin >> number;
    cout << "*****************************************************" << endl;

    unsigned long int fibo[number];

    fibo[0]=0;
    fibo[1]=1;
    cout << "Fibonacci [0]:" << fibo[0] << endl;
    cout << "Fibonacci [1]:" << fibo[1] << endl;

    for(unsigned long int i = 2 ; i <= number; i++) {
        fibo[i]=fibo[i-1]+fibo[i-2];
        cout << "Fibonacci [" << i << "]:" << fibo[i] << endl;
        }
    return 0;
    }
