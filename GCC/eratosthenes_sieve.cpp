// EratosthenesSieve
// Given a natural number N, find how many prime numbers are
// less or equal then N, N <= 2000000
#include <iostream>
using namespace std;

int N, counter;
char p[2000001];
 
int main()
{
	cin >> N;
	for(int i = 2; i <= N; ++i)
	{
		p[i] = 1;
	}
	for(int i = 2; i <= N; ++i)
	{
		if(p[i])
		{
			++counter;
			for(int j = i + i; j <= N; j += i)
			{
				p[j] = 0;
			}
		}
	}
	cout << counter;
	return 0;
}
