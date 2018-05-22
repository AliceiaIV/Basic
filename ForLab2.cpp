#include <iostream>

using namespace std;

int main()
{
	for(int i = 2; i <= 12; i+=3)
	{
		for(int a = 1; a <= 12; a++)
		{
			cout << i << " x " << a << " = " << (i*a) << "\t\t";
			cout << i+1 << " x " << a << " = " << ((i+1)*a) << "\t\t";
			cout << i+2 << " x " << a << " = " << ((i+2)*a);
			cout << endl;
		}

		cout << endl;
	}

	return 0;
}