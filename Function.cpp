#include <iostream>

using namespace std;

int Sum(int a, int b)
{
	return a + b;
}

int main()
{
	cout << Sum(5, 10) << endl;

	int i, a;

	cout << "Enter I: ";
	cin >> i;
	cout << "Enter A: ";
	cin >> a;

	cout << i << " + " << a << " = " << Sum(i, a) << endl;

	return 0;
}