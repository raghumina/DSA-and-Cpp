#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "PLEASE ENTER A NUMBER" << endl;
	cin >> n;
	//int sum = 0;
	if (n < 0)
	{
		cout << "invalid input";
	}
	else {
		cout << n * (n + 1) / 2;
	}
}
