#include <iostream>
using namespace std;

bool isPrime(__int64 number)
{
	__int64 i = 2;
	double max = sqrt(number);

	bool prime = true;
	while (i <= max)
	{
		if (number % i == 0)
		{
			prime = false;
				break;
		}
		i++;
	}

	return prime;
}

int main()
{
	__int64 number = 2;
	__int64 sum = 0;

	while (number <= 2000000)
	{
		if (isPrime(number))
			sum += number;
		number++;
	}

	cout << sum << endl;
}