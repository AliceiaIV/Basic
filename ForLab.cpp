#include <iostream>

using namespace std;

int main()
{
	for(int i = 2; i <= 12; i++)
	{
		for(int a = 1; a <= 12; a++)
		{
			cout << i << " x " << a << " = " << (i*a) << endl;
		}

		cout << endl;
	}

	return 0;
}