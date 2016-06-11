#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 1;
	int c = 0;

	int sum = 0;

	for (c = a + b; c < 4000000; c = a + b)
	{
		a = b;
		b = c;
		if (c & 1)
			continue;
		else
			sum += c;
	}

	cout << "Answer: " << sum <<endl;
}