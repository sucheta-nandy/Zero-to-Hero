#include <iostream.h>
#include <conio.h>

int main()
{
  int a, b, c, d, e, f;
  cout << "Enter two integers to add\n";
  cin >> a >> b;
  c = a / b;
  d = a * b;
  e = a + b;
  f = a - b;
  
  cout <<"division of the numbers: " << c << endl;
  cout <<"sum of the numbers: " << e << endl;
  cout <<"subtraction of the numbers: " << f << endl;
  cout <<"multiplication of the numbers: " << d << endl;
  
	return 0;
}
