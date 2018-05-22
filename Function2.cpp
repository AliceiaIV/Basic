#include <iostream>

using namespace std;

int A(int a)
{
	return a + 10;
}

int A(int a, int b)
{
	return a + b;
}

int main()
{
	cout << A(10) << endl;
	cout << A(30, 20) << endl;

	return 0;
}