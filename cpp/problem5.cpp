#include <iostream>
using namespace std;

int main()
{
	__int64 number = 0;
	bool found = false;

	do
	{
		number++;
		found = true;
		for (int i = 2; i <= 20; i++)
		{
			if (number % i != 0)
			{
				found = false;
				break;
			}
		}
	} while (!found);
	cout << number << endl;
}