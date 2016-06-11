#include <iostream>
using namespace std;

int main()
{
	__int64 product = 0;

	int c = 0;
	int b = 0;
	int a = 0;

	for (c = 997; c > 333; --c)
	{
		for (b = 2; b < 333; ++b)
		{
			a = 1000 - c - b;
			if (a*a + b*b == c*c)
			{
				product = a * b * c;
				break;
			}
		}

		if (product != 0)
			break;
	}

	cout << a << " " << b << " " << c << " " << endl;
	cout << product << endl;
}