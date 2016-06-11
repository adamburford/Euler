#include <iostream>
using namespace std;

int main() {

	__int64 divisor = 2;
	__int64 number = 600851475143;

	while (number > 1)
	{
		while (number % divisor == 0)
		{
			cout << divisor << endl;
			number = number / divisor;
		}

		divisor++;

		if (divisor * divisor > number && number > 1)
		{
			cout << number << endl;
			break;
		}
	}
}