#include<iostream>
using namespace std;
int main()
{
	cout << " PLEASE ENTER THE TWO INTEGER VALUES " << endl;

	int x ;
	int y ;
	cin >> x >> y;
	// THE ADDITION OPERATOR
	cout << (x + y) << " " << endl;
	// THE SUBSTRACTION OPERATOR
	cout << (x - y) << " " << endl;
	// THE MULTIPLICATION OPERATOR
	cout << (x * y) << " " << endl;
	// THE DIVIDE OPERATOR 
	cout << (x / y) << " " << endl;
	// THE MODULUS OPERATOR 
	cout << (x % y) << " " << endl;
	// THE INCREAMENT DECREAMENT OPERATOR
	int z = x++;
	cout << "" << z << endl;
	int w = ++x;
	cout << "" << w << endl;
	int a = y--;
	cout << "" << a << endl;
	int b = --y;
	cout << "" << b << endl;
	return 0;
}
	