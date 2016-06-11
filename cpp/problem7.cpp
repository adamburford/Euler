#include <iostream>
using namespace std;

int main()
{
	int primecount = 2;

	__int64 number = 3;

	bool prime = true;

	while (primecount < 10001)
	{
		number += 2;
		double squareRoot = sqrt(number);
		prime = true;
		
		for (int i = 3; i <= squareRoot; i++)
		{
			if (number % i == 0)
			{
				prime = false;
				break;
			}
		}

		if (prime)
			primecount++;
	}

	cout << number << endl;
}