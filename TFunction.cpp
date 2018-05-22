#include <iostream>

using namespace std;

//Type  //Name
void     Test    ()
{
	cout << "Hello" << endl;
}

int Test2 ()
{
	return 50;
}

int Test3 (int a)
{
	int c = a + 10;
	return c;
}

int Sum (int a, int b)
{
	return a + b;
}

int main()
{
	Test();

	//cout << Test2() << endl;

	int a = Test2();

	cout << a << endl;

	cout << Test3(5) << endl;

	cout << Sum(10, 50) << endl;

	return 0;
}