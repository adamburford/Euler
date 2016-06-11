#include <iostream>
using namespace std;

int main()
{
	__int64 value = 0;
	__int64 number = 0;
	int divisors = 0;

	double half = 0;
	__int64 factor = 0;

	do 
	{
		number += 1;
		value += number;

		half = sqrt(value);

		factor = 2;
		divisors = 2;
		while (factor < half)
		{
			if (value % factor == 0)
				divisors += 2;

			factor++;
		}
	} while (divisors <= 500);

		cout << value << endl;
}